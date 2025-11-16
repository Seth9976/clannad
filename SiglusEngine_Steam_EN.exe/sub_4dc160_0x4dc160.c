// 函数: sub_4dc160
// 地址: 0x4dc160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3

if (edi == 0)
    return 0x80004003

*edi = 0
int32_t result = 0x80004001
int32_t* ecx = *(arg1 + 0x34)

if (ecx != 0)
    arg3 = nullptr
    bool cond:0_1 = (*(*ecx + 0x48))(ecx, arg2, &arg3) s< 0
    int32_t* eax_4 = arg3
    
    if (cond:0_1)
    label_4dc1c8:
        
        if (eax_4 != 0)
            (*(*eax_4 + 8))(eax_4)
    else if (eax_4 != 0)
        result = (**eax_4)(eax_4, 0x61d3e0, edi)
        
        if (result s< 0 || *edi == 0)
            result = 0x80004001
        
        eax_4 = arg3
        goto label_4dc1c8

return result
