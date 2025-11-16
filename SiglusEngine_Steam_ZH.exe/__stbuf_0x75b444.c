// 函数: __stbuf
// 地址: 0x75b444
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_75bfb2(__fileno(arg1))

if (result == 0)
    return result

int32_t edi_1

if (arg1 == &data_b4c210)
    edi_1 = 0
label_75b481:
    data_b94f18 += 1
    
    if ((arg1[3] & 0x10c) == 0)
        int32_t eax_1
        
        if (*((edi_1 << 2) + &data_b95a38) == 0)
            eax_1 = sub_74cd17(0x1000)
            *((edi_1 << 2) + &data_b95a38) = eax_1
        
        if (*((edi_1 << 2) + &data_b95a38) != 0 || eax_1 != 0)
            int32_t ecx_2 = *((edi_1 << 2) + &data_b95a38)
            arg1[2] = ecx_2
            *arg1 = ecx_2
            arg1[6] = 0x1000
            arg1[1] = 0x1000
        else
            arg1[2] = &arg1[5]
            *arg1 = &arg1[5]
            arg1[6] = 2
            arg1[1] = 2
        
        arg1[3] |= 0x1102
        return 1
else if (arg1 == &data_b4c230)
    edi_1 = 1
    goto label_75b481
return 0
