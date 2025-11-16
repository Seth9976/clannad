// 函数: sub_a9f090
// 地址: 0xa9f090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_4ebe350 == 0
data_4ebe34c = &ATL::CComModule::`vftable'{for `ATL::CAtlModuleT<class ATL::CComModule>'}

if (not(cond:0))
    if (data_4ebe358 != 0)
        sub_69b890(&data_4ebe350)
        data_4ebe358 = 0
    
    int32_t* ecx_1 = data_4ebe374
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
    
    DeleteCriticalSection(&data_4ebe35c)
    data_4ebe350 = 0

return sub_52e4f0() __tailcall
