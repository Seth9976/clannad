// 函数: sub_699270
// 地址: 0x699270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[1] == 0
*arg1 = &ATL::CComModule::`vftable'{for `ATL::CAtlModuleT<class ATL::CComModule>'}

if (not(cond:0))
    if (arg1[3] != 0)
        sub_69b890(&arg1[1])
        arg1[3] = 0
    
    int32_t* ecx_1 = arg1[0xa]
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
    
    DeleteCriticalSection(&arg1[4])
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
