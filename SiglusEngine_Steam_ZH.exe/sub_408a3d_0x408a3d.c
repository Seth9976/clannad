// 函数: sub_408a3d
// 地址: 0x408a3d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
sub_40889e(arg3, arg1)
int16_t* esi = arg2
int32_t ebx = sub_40b661(arg3)

while (*esi != 0xff)
    if (sub_4088cc(arg3, esi[3].b, *(esi + 7)) == 0)
        ebx += 1
        
        if (ebx u> 0x41)
            return 0x8876086c
        
        sub_4088f6(esi, arg3)
    
    esi = &esi[4]

return 0
