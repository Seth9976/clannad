// 函数: ?_Destroy@?$_Ref_count@V__ExceptionPtr@@@std@@EAEXXZ
// 地址: 0x42d05c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg1 + 0xc)

if (esi != 0)
    std::_Ref_count<class __ExceptionPtr>::_Destroy()
    j__free(esi)
