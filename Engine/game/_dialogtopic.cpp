
#include "Engine/game/_dialogtopic.h"

namespace AGS
{
namespace Engine
{
namespace Game
{

namespace Err = AGS::Common::Core::Err;

CDialogTopic::CDialogTopic()
{
}

CDialogTopic::~CDialogTopic()
{

}

/*const*/ DialogTopic &CDialogTopic::GetDialogTopic() /*const*/
{
    return _dialogTopic;
}

HErr CDialogTopic::Read(CStream *in)
{
    return Err::Nil();
}

HErr CDialogTopic::Write(CStream *out)
{
    return Err::Nil();
}

} // namespace Game
} // namespace Engine
} // namespace AGS