// 函数: sub_605bf0
// 地址: 0x605bf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1cd4520 == 0
data_1cd451c = &ATL::CComModule::`vftable'{for `ATL::CAtlModuleT<class ATL::CComModule>'}

if (not(cond:0))
    if (data_1cd4528 != 0)
        sub_4e3710(&data_1cd4520)
        data_1cd4528 = 0
    
    int32_t* ecx_1 = data_1cd4544
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
    
    DeleteCriticalSection(&data_1cd452c)
    data_1cd4520 = 0

return sub_4d9620() __tailcall
