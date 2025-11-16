// 函数: sub_409105
// 地址: 0x409105
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
sub_4090b4(arg1, arg2)
sub_4090b4(&arg1[0x31], arg3)
arg1[0x62] = 0

if (*arg2 != 0xff)
    void* edi_2 = &arg2[3]
    
    do
        int16_t* eax_3 = sub_4085d9(&arg1[0x31], zx.d(*edi_2), zx.d(*(edi_2 + 1)))
        
        if (eax_3 != 0 && *(edi_2 - 1) != 4 && *(eax_3 + 5) != 4)
            arg1[arg1[0x62] + 0x63] = edi_2 - 6
            arg1[arg1[0x62] + 0xa4] = eax_3
            arg1[0x62] += 1
        
        edi_2 += 8
    while (*(edi_2 - 6) != 0xff)

return arg1
