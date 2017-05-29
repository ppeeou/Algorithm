var Stack = (function () {

    function Stack() {
        this.top = null;
        this.count = 0;
    }
    function Node(data) {
        this.data = data;
        this.next = null;
    }

    Stack.prototype.push = function (data) {
        var node = new Node(data);
        node.next = this.top;
        this.top = node;

        return ++this.count;
    }
    Stack.prototype.pop = function () {
        if(!this.top) return false;
        var data = this.top.data;
        this.top = this.top.next;
        this.count--;
        return data;
    }

    return Stack;
})();

function divideBy(decNumber,base) {

    var renStack = new Stack(),
        rem,
        binaryString = '',
        digits ='0123456789ABCDEF';

    while (decNumber > 0) {
        rem = Math.floor(decNumber % base);
        renStack.push(rem);
        decNumber = Math.floor(decNumber / base);
    }

    while(renStack.count){
        binaryString += digits[renStack.pop()];
    }
    return binaryString;
}

console.log(divideBy(10,2));