#ifndef OMS_BATCHMESSAGESENDER_H
#define OMS_BATCHMESSAGESENDER_H

#include "Namespace.h"
#include "Message.h"
#include "Uncopyable.h"

BEGIN_NAMESPACE_3(io, openmessaging, producer)
    /**
     * A message sender created through {@link Producer#createSequenceBatchMessageSender()}, to send
     * messages in batch way, and commit or roll back at the appropriate time.
     *
     * @version OMS 1.0
     * @since OMS 1.0
     */
    class BatchMessageSender : private Uncopyable {
    public:
        virtual ~BatchMessageSender() {

        }

        virtual void send(Message &message, boost::shared_ptr<KeyValue> &properties = kv_nullptr) = 0;

        virtual void commit() = 0;

        virtual void rollback() = 0;

        virtual void close() = 0;
    };

END_NAMESPACE_3(io, openmessaging, producer)

#endif //OMS_BATCHMESSAGESENDER_H
