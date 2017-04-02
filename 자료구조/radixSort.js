
var counter = [[]];
var radixSort = function (array, d) {


    var mod = 10;
    for (var i = 0; i < d; i++ , mod *= 10) {
        for (var j = 0; j < array.length; j++) {
            var bucket = parseInt(array[j] % mod);
            if (counter[bucket] == null) {
                counter[bucket] = [];
            }
            counter[bucket].push(array[j]);
            console.log('bucket', bucket, counter[bucket]);
        }
        console.log('\n');
        var pos = 0;
        for (var j = 0; j < counter.length; j++) {
            var value = null;
            if (counter[j] != null) {
                while ((value = counter[j].shift()) != null) {
                    array[pos++] = value;
                }
            }
        }
    }
    return array;
}


//상당히 빠르며, 대신 메모리 소모가 있음.
console.log(radixSort([125, 383, 274, 96, 0, 9, 81, 72], 3)); // [0,9,72,81,96,125,274,383]