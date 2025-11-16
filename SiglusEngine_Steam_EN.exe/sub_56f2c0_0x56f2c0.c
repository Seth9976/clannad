// 函数: sub_56f2c0
// 地址: 0x56f2c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
int32_t* eax

if (data_20efcd8 != arg1)
    int32_t edi_1 = data_20efcd0
    WPARAM esi_1 = 0
    eax = data_20efccc
    
    if (edi_1 s> 0)
        do
            if (*eax == arg1)
                eax = sub_4c1300(sub_56f100(esi_1), data_20efcc0, esi_1, 0x4f32, 3)
                break
            
            esi_1 += 1
            eax = &eax[1]
        while (esi_1 s< edi_1)

return sub_4c1300(eax, data_20efcc0, arg2, 0x4f33, 3)
