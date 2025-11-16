// 函数: sub_576110
// 地址: 0x576110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
void* i = &data_f8d3bc
int32_t result = 0
int32_t var_8 = 0
int32_t result_1 = 0
void* i_1 = &data_f8d3bc

do
    if (ecx u<= 0x3f)
        sub_460d60(i - 0x60)
        sub_460d60(i)
        void* edi_1 = i - 0x38c0
        void* var_1c_1 = edi_1
        sub_576270(edi_1)
        sub_4d6c40(i - 0xc44, i - 0xc40)
        *(i - 0xc3c) = 0
        sub_57e420(edi_1)
        data_1af0b10 = 0
        sub_580290(i - 0x3604)
        sub_580290(i - 0x3528)
        sub_580290(i - 0x3414)
        sub_580290(i - 0x3338)
        int32_t ecx_10 = 0
        int32_t eax = 0
        int32_t var_10_1 = 0
        int32_t j = 0
        int32_t var_14_1 = 0
        
        do
            if (ecx_10 u<= 7)
                void* ebx = edi_1 + j
                void* edi_2 = edi_1 + eax
                sub_4d1ba0(sub_57ee30(result_1 + &data_8fcb48 + eax, ebx + 0x2ca0), 0x24, 
                    edi_2 + 0x35e0, 0)
                eax = var_14_1
                ecx_10 = var_10_1
                *(edi_2 + 0x3604) = 0xffffffff
                edi_1 = var_1c_1
                *(ebx + 0x2dc4) = 0
            
            ecx_10 += 1
            j += 0x128
            eax += 0x40
            var_10_1 = ecx_10
            var_14_1 = eax
        while (j s< 0x940)
        
        sub_576470(var_8)
        i = i_1
        result = result_1
        ecx = var_8
    
    i += 0x3920
    ecx += 1
    result += 0x2d0
    var_8 = ecx
    i_1 = i
    result_1 = result
while (i s< 0x1071bbc)

return result
