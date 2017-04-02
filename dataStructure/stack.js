

var Stack = (function () {

    function Stack() {
        this.count = 0;
        this.top = null;
    };

    function Node(data) {
        this.data = data;
        this.next = null;
    }
    Stack.prototype.push = function (data) {

        var node = new Node(data);
        node.next = this.top;
        this.top = node;

        return ++this.count;
    };

    Stack.prototype.pop = function () {

        if (!this.top) {
            return false;
        }

        var data = this.top.data;
        this.top = this.top.next;
        this.count--;
        return data;

    };
    Stack.prototype.stackTop = function () {
        return this.top && this.top.data;
    };
    return Stack;
})();
var stack = new Stack();
console.log(stack.push(1)); // 1
console.log(stack.push(3)); // 2
console.log(stack.push(5)); // 3
console.log(stack.pop()); // 5
console.log(stack.stackTop()); // 3