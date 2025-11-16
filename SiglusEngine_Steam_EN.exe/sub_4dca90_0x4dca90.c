// 函数: sub_4dca90
// 地址: 0x4dca90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1
int32_t eax_4 = (sx.d(arg2) << 3 ^ ecx[0x1f]) & 8
arg1 = nullptr
ecx[0x1f] ^= eax_4
int32_t* ecx_1 = ecx[5]

if (ecx_1 != 0 && (**ecx_1)(ecx_1, 0x61d330, &arg1) s>= 0)
    int32_t* eax_7 = arg1
    
    if (eax_7 != 0)
        (*(*eax_7 + 0x14))(eax_7, 0xfffffd3e)
        int32_t* eax_8 = arg1
        
        if (eax_8 != 0)
            (*(*eax_8 + 8))(eax_8)

return 0
