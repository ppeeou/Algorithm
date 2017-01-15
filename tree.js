
var Tree = (function () {

    function Tree() {
        this.count = 0;
        this.root;
    };

    function Node(data) {
        this.data = data;
        this.left;
        this.right;
    };

    function _add(root, node) {
        if (!root) return node;
        if (node.data < root.data) {
            root.left = _add(root.left, node);
        } else {
            root.right = _add(root.right, node);
        }
        return root;
    }

    Tree.prototype.add = function (data) {
        var node = new Node(data);

        if (this.count == 0) {
            this.root = node;
        } else {
            _add(this.root, node);
        }
        return ++this.count;
    };

    function _get(data, node) {
        if (node) {
            if (data < node.data) {
                return _get(data, node.left);
            } else if (data > node.data) {
                return _get(data, node.right);
            } else {
                return node;
            }
        } else {
            return null;
        }
    };

    Tree.prototype.get = function (data) {

        if (this.root) {
            return _get(data, this.root);
        } else {
            return null;
        }
    };

    function _remove(data, root) {
        var newRoot, exchange, temp;
        if (!root) return false;

        if (data < root.data) {
            root.left = _remove(data, root.left);
        } else if (data > root.data) {
            root.right = _remove(data, root.right);
        } else {
            if (!root.left) {
                newRoot = root.right;
                return newRoot;
            } else if (!root.right) {
                newRoot = root.left;
                return newRoot;
            } else {
                exchange = root.left;
                while (exchange.right) exchange = exchange.right;
                temp = root.data;
                root.data = exchange.data;
                exchange.data = temp;
                root.left = _remove(exchange.data, root.left);
            }
        }
        return root;
    }
    Tree.prototype.remove = function (key) {
        var node = _remove(key, this.root);

        if (node) {
            this.root = node;
            this.count--;
            if (this.count == 0) this.root = null;
        }
        return true;
    };

    return Tree;
})();