
var countingSort = function (array, k) {
  var count = [], result = [];
  for (var i = 0; i <= k; i++) { // 모든 숫자의 개수를 일단 0으로 초기화합니다.
    count[i] = 0;
  }
  for (var j = 0; j < array.length; j++) { // 숫자의 개수를 세어 저장합니다.
    count[array[j]] += 1;
  }
  for (i = 0; i <= k; i++) { // 누적합을 구합니다.
    count[i + 1] += count[i];
  }
  for (j = 0; j < array.length; j++) {
    if(!result[count[array[j]]]&&count[array[j]>0]){
      result[count[array[j]]--] = array[j];
    }else{
      result[--count[array[j]]] = array[j];
    } 
  }
  return result;
};

//배열에 큰 수가 들어갈 수록 계수정렬은 좋지 않음... 메모리를 많이 잡아먹기 때문
console.log(countingSort([54, 6, 645, 67, 3, 5, 7, 856, 898, 9, 657, 57, 1, 567, 2, 0], 898));