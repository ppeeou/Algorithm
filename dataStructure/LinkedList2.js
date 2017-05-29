
function LinkedList() {

    var Node = function (element) {
        this.element = element;
        this.next = null;
        this.prev = null;
    }

    var length = 0;
    var head = null;
    var tail = null;

    this.append = function (element) {
        var node = new Node(element),
            current;
        if (!head) {
            head = node;
        } else {
            current = head;
            while (current.next) {
                current = current.next;
            }
            current.next = node;
        }
        length++;
    }
    this.insert = function (position, element) {
        if (position < 0 || position >= length) return false;

        var node = new Node(element),
            current = head,
            previous,
            index = 0;
        if (position == 0) {
            if (!head) {
                head = node;
                tail = node;
            } else {
                node.next = current;
                current.prev = node;
                head = node;
            }
        } else if (position == length - 1) {
            current = tail;
            current.next = node;
            node.prev = current;
            tail = node;
        } else {
            while (index++ < previous) {
                previous = current;
                current = current.next;
            }
            node.next = current;
            node.prev = previous;
            current.prev = node;
            previous.next = node;
        }
        return ++length;
    }
    this.removeAt = function (position) {
        if (position < 0 || position >= length) return false;
        var current = head,
            previous,
            index = 0;
        if (position == 0) {
            head = current.next;
            if (length == 1) {
                tail = null;
            } else {
                head.prev = null;
            }
        } else if (position == length - 1) {
            current = tail;
            tail = current.prev;
            tail.next = null;
        } else {
            while (index++ < position) {
                previous = current;
                current = current.next;
            }
            previous.next = current.next;
            current.next.prev = previous;
        }
        length--;
        return current.element;
    }

    this.indexOf = function (element) {
        var current = head,
            index = 0;
        while (current) {
            if (current.element == element) {
                return index;
            }
            index++;
            current = current.next;
        }
        return -1;
    }
    this.isEmpty = function () {
        return length === 0;
    }
    this.size = function () {
        return length;
    }
    this.toString = function () {
        var current = head,
            string = '';
        while (current) {
            string += current.element;
            current = current.next;
        }
        return string;
    }
    this.remove = function (element) {
        var index = this.indexOf(element);
        return this.removeAt(index);
    }
}
var linkedList = new LinkedList();
linkedList.append(3);
linkedList.append(4);
linkedList.append(6);
linkedList.append(7);
linkedList.append(9);

console.log(linkedList.indexOf(3));