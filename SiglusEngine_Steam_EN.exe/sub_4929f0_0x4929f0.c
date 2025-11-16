// 函数: sub_4929f0
// 地址: 0x4929f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = data_131310c - data_1ff4cc8
void* edx = &data_1085990
void* var_18 = &data_1085990

if (ecx_1 u> 0xfa)
    ecx_1 = 0xfa

void* eax = &data_924950
int32_t var_c = ecx_1
int32_t* i = &data_70301c
void* var_14 = &data_924950

do
    i[-3] = 0
    void* j = nullptr
    i[-2] = 0
    void* ebx_1 = edx
    i[-1] = 0
    __builtin_memset(i, 0, 0x14)
    void* j_1 = nullptr
    void* var_8_1 = eax
    
    do
        uint32_t edi_1 = zx.d(*(j + 0x1b8c210))
        sub_491360(
            sub_491360(
                sub_491360(sub_491360(eax, ebx_1 - 0x2c, eax - 0x48, ecx_1, 0, edi_1), 
                    ebx_1 + 0x18, var_8_1, var_c, 0, edi_1), 
                ebx_1 + 0x5c, var_8_1 + 0x48, var_c, 1, edi_1), 
            ebx_1 + 0xa0, var_8_1 + 0x90, var_c, 0, edi_1)
        int32_t eax_4 = *(ebx_1 - 0xc)
        ebx_1 += 0x220
        i[-3] += eax_4
        i[-2] += *(ebx_1 - 0x220)
        i[-1] += *(ebx_1 - 0x1e8)
        *i += *(ebx_1 - 0x1dc)
        i[1] += *(ebx_1 - 0x1a4)
        i[2] += *(ebx_1 - 0x198)
        i[3] += *(ebx_1 - 0x160)
        i[4] += *(ebx_1 - 0x154)
        j = j_1 + 1
        ecx_1 = var_c
        eax = var_8_1 + 0x248
        j_1 = j
        var_8_1 = eax
    while (j s< 4)
    
    i = &i[8]
    eax = var_14 + 0x124
    edx = var_18 + 0x110
    var_14 = eax
    var_18 = edx
while (i s< &data_70305c)

int32_t result = data_131310c
data_1ff4cc8 = result
return result
