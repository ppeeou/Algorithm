
function LinkedList() {

    var Node = function (element) {
        this.element = element;
        this.next = null; 
    }

    var length = 0;
    var head = null;

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
            node.next = current;
            head = node;
        } else {
            while (index++ < previous) {
                previous = current;
                current = current.next;
            }
            node.next = current;
            previous.next = node;
        }
        length++;
    }
    this.removeAt = function (position) {
        if (position < 0 || position >= length) return false;
        var current = head,
            previous,
            index = 0;
        if (position == 0) {
            head = current.next;
        } else {
            while (index++ < position) {
                previous = current;
                current = current.next;
            }
            previous.next = current.next;
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
var linkedList =  new LinkedList();
linkedList.append(3);
linkedList.append(4);
linkedList.append(6);
linkedList.append(7);
linkedList.append(9);

console.log(linkedList.indexOf(3));