function PriorityQueue() {

    var items = [];

    function QueueElement(element, priority) {
        this.element = element;
        this.priority = priority;
    }

    this.enqueue = function (element, priority) {
        var queueElement = new QueueElement(element, priority);

        if (this.isEmpty()) {
            items.push(queueElement);
        }else{
            var added = false;
            for(var i=0; i<items.length ; i++){
                if(queueElement.priority < items[i].priority){
                    items.splice(i,0,queueElement);
                    added = true;
                    break;
                }
            }
            if(!added){
                items.push(queueElement);
            }
        }
    }
    this.pop = function(){
        return items.shift();
    }
}