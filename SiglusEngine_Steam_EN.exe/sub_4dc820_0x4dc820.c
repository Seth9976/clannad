// 函数: sub_4dc820
// 地址: 0x4dc820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1

if (edi[0x23] != arg2)
    if (arg2 != 0)
        (*(*arg2 + 4))(arg2)
    
    int32_t* eax_2 = edi[0x23]
    edi[0x23] = arg2
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)

int32_t* ecx_2 = edi[5]
arg1 = nullptr

if (ecx_2 != 0 && (**ecx_2)(ecx_2, 0x61d330, &arg1) s>= 0)
    int32_t* eax_5 = arg1
    
    if (eax_5 != 0)
        (*(*eax_5 + 0x14))(eax_5, 0xfffffd41)
        int32_t* eax_6 = arg1
        
        if (eax_6 != 0)
            (*(*eax_6 + 8))(eax_6)

return 0
