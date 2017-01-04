
var mergeSort =function (array){

    if(array.length<2) return array;
    var pivot = Math.floor(array.length/2);
    var left = array.slice(0,pivot);
    var right = array.slice(pivot,array.length);

    return merge(mergeSort(left),mergeSort(right));
}

function merge(left, right){

    var temp =[];
    
    while(left.length && right.length){
        if(left[0]<=right[0]){
            temp.push(left.shift());
        }else{
            temp.push(right.shift());
        }
    }
    while(right.length)temp.push(right.shift());
    while(left.length)temp.push(left.shift());
    return temp;
};



console.log(mergeSort([54,6,645,67,3,5,7,856,8983,9,657,57,1,567,2]));