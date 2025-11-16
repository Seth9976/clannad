// 函数: sub_6af8f0
// 地址: 0x6af8f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t var_18 = 1
int32_t var_c = 0
int32_t esi = *ebx
int32_t edi = ebx[1]
sub_6af750(arg1)
int16_t* eax = *ebx

if (eax == ebx[1] || *eax != 0x2b)
    if (sub_6af730(ebx, esi, edi) == 0)
        int32_t esi_1 = *ebx
        int32_t edi_1 = ebx[1]
        sub_6af750(ebx)
        int16_t* eax_3 = *ebx
        
        if (eax_3 == ebx[1] || *eax_3 != 0x2d)
            if (sub_6af730(ebx, esi_1, edi_1) != 0)
                var_18 = 0xffffffff
        else
            *ebx = &eax_3[1]
            var_18 = 0xffffffff
    else
        var_18 = 1
else
    var_18 = 1
    *ebx = &eax[1]

int32_t eax_6 = *ebx
int32_t eax_7 = ebx[1]

if (sub_6af380(sub_6af750(ebx), &var_c, ebx, ebx[1]) == 0)
    char eax_10 = sub_6af730(ebx, eax_6, eax_7)
    
    if (eax_10 == 0)
        *ebx = esi
        ebx[1] = edi
        return eax_10

*arg2 = var_c * var_18
int32_t* eax_11
eax_11.b = 1
return eax_11
