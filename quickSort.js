

var partition = function (array, left, right, pivotIndex) {
    var temp;

    while (left <= right) {

        while (array[left] < array[pivotIndex])
            left++;
        while (array[right] > array[pivotIndex])
            right--;
        if (left <= right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
    }

    temp = array[left];
    array[left] = array[pivotIndex];
    array[pivotIndex] = temp;
    return left;
}


var quickSort = function (array, left, right) {

    if (!left) left = 0;
    if (!right) right = array.length - 1;
    var pivotIndex = right;

    pivotIndex = partition(array, left, right - 1, pivotIndex);

    if(left<pivotIndex-1)
        quickSort(array,left,pivotIndex-1);
    if(pivotIndex+1<right)
        quickSort(array,pivotIndex+1,right);

    return array;
};


console.log(quickSort([54, 6, 645, 67, 3, 5, 7, 856, 8983, 9, 657, 57, 1, 567, 2]));