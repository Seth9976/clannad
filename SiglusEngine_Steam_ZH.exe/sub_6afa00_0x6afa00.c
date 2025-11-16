// 函数: sub_6afa00
// 地址: 0x6afa00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t var_1c = 1
int32_t esi = *ebx
int32_t edi = ebx[1]
int64_t var_10 = 0
sub_6af750(arg1)
int16_t* eax = *ebx
void* eax_1

if (eax == ebx[1] || *eax != 0x2b)
    eax_1 = sub_6af730(ebx, esi, edi)
    
    if (eax_1.b == 0)
        int32_t esi_1 = *ebx
        int32_t edi_1 = ebx[1]
        sub_6af750(ebx)
        int16_t* eax_2 = *ebx
        
        if (eax_2 == ebx[1] || *eax_2 != 0x2d)
            eax_1 = sub_6af730(ebx, esi_1, edi_1)
            
            if (eax_1.b != 0)
                var_1c = 0xffffffff
        else
            eax_1 = &eax_2[1]
            *ebx = eax_1
            var_1c = 0xffffffff
    else
        var_1c = 1
else
    eax_1 = &eax[1]
    var_1c = 1
    *ebx = eax_1

int32_t edi_2 = ebx[1]
int32_t esi_2 = *ebx
int32_t eax_3 = sub_6af2c0(eax_1, &ebx[2], ebx, edi_2)

if (eax_3.b == 0)
    *ebx = esi_2
    ebx[1] = edi_2

if (sub_6af3e0(eax_3, &var_10, ebx, ebx[1]) == 0)
    *ebx = esi
    ebx[1] = edi
    int32_t eax_6
    eax_6.b = 0
    return eax_6

int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(var_1c)
int32_t eax_9
int32_t edx_3
eax_9, edx_3 = __allmul(eax_8, edx_2, var_10.d, var_10:4.d)
*arg2 = eax_9
eax_9.b = 1
arg2[1] = edx_3
return eax_9
