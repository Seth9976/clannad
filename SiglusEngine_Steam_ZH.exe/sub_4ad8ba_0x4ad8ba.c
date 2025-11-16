// 函数: sub_4ad8ba
// 地址: 0x4ad8ba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t edi_1 = 0
int32_t var_18 = 0
sub_4a39e3(arg1)
uint32_t ebx = sub_745f3f(*(arg1 + 8) << 2)
uint32_t var_14 = ebx

if (ebx == 0)
    return 0x8007000e

int32_t i = 0
int32_t var_c_1 = 0
int32_t var_10_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* ecx_2 = *(*(arg1 + 0x14) + (i << 2))
        *(ecx_2 + 0x30) = i
        int16_t ecx_5 = (*(*(*(arg1 + 0x10) + (*(ecx_2 + 4) << 2)) + 4)).w
        
        if ((ecx_5:1.b & 1) != 0 && (ecx_5:1.b & 0xc) == 0)
            *(ebx + (edi_1 << 2)) = i
            edi_1 += 1
        
        i += 1
    while (i u< *(arg1 + 8))
    
    var_c_1 = edi_1

sub_458e55(sub_49f903, ebx, edi_1, arg1)
int32_t var_8_1 = 1

if (edi_1 u> 1)
    while (true)
        int32_t eax_4 = var_8_1 << 2
        int32_t edi_2 = eax_4 + ebx
        
        if (sub_49f903(*(*(*(arg1 + 0x14) + (*(eax_4 + ebx - 4) << 2)) + 0x30), *edi_2, arg1) == 0)
            *(*(*(arg1 + 0x14) + (*edi_2 << 2)) + 4) = *(arg1 + 0x74)
            int32_t eax_10 = *(arg1 + 0x14)
            *(*(eax_10 + (*edi_2 << 2)) + 0x30) = *(*(eax_10 + (*(eax_4 + ebx - 4) << 2)) + 0x30)
            var_10_1 = 1
        
        var_8_1 += 1
        
        if (var_8_1 u>= var_c_1)
            break
        
        ebx = var_14
    
    if (var_10_1 != 0)
        sub_4a3f8e(arg1)
        var_18 = 1
    
    ebx = var_14

int32_t i_1 = 0
int32_t edi_3 = 0
int32_t var_c_2 = 0
int32_t var_10_2 = 0

if (*(arg1 + 8) u> 0)
    do
        void* ecx_14 = *(*(arg1 + 0x14) + (i_1 << 2))
        *(ecx_14 + 0x30) = i_1
        int32_t ecx_15 = *(ecx_14 + 4)
        
        if (*(arg1 + 0x74) != ecx_15
                && ((*(*(*(arg1 + 0x10) + (ecx_15 << 2)) + 4) & 0x40) != 0 || *(arg1 + 0xdc) != 0))
            *(ebx + (edi_3 << 2)) = i_1
            edi_3 += 1
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))
    
    var_c_2 = edi_3

sub_458e55(sub_49f952, ebx, edi_3, arg1)

if (edi_3 != 0)
    var_14 = *ebx

int32_t var_8_2 = 1

if (edi_3 u> 1)
    do
        uint32_t edi_4 = *(ebx + (var_8_2 << 2))
        
        if (sub_49f952(var_14, edi_4, arg1) != 0)
            var_14 = edi_4
        else
            sub_4a699a(arg1, var_14, edi_4)
            *(*(*(arg1 + 0x14) + (*(ebx + (var_8_2 << 2)) << 2)) + 4) = *(arg1 + 0x74)
            var_10_2 = 1
        
        var_8_2 += 1
    while (var_8_2 u< var_c_2)
    
    if (var_10_2 != 0)
        sub_4a3f8e(arg1)
        var_18 = 1

j__free(ebx)
int32_t result
result.b = var_18 == 0
return result
