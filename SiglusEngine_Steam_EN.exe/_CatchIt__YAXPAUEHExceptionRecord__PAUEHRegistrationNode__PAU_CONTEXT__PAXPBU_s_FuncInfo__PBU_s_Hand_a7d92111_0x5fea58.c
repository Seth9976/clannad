// 函数: ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
// 地址: 0x5fea58
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg7 != 0)
    ___BuildCatchObject(arg1, arg2, arg6, arg7)

void** var_10_2

var_10_2 = arg10 != 0 ? arg10 : arg2

sub_5f6e4f(var_10_2, arg1)
int32_t var_10_3 = *arg8
___FrameUnwindToState(arg2, arg4, arg5)
arg2[2] = arg8[1] + 1
int32_t* result = sub_5fe852(arg1, arg2, arg3, arg5, arg6[3], arg9, 0x100)

if (result == 0)
    return result

return _JumpToContinuation(result, arg2)
