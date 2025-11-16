// 函数: sub_6e5910
// 地址: 0x6e5910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 3
void* edx = nullptr
int32_t ecx = *(arg1 + 0xe4)
void* edi = arg1 + 0x104
int32_t eax = *(arg1 + 0x100)
int32_t esi = *(arg1 + 0xe0)
int32_t ecx_1 = *(arg1 + 0xd0)
int32_t result = 0
int32_t ecx_2 = 0
void* ebx_1 = arg1 + 0x8c
int32_t result_1 = 0
int32_t var_10 = esi
void* var_18 = nullptr
void* var_20 = edi
void* var_24 = ebx_1
int32_t i

do
    int32_t ecx_3 = ecx_2 + *ebx_1
    
    if (edx u< ecx_3)
        do
            int32_t j = 0
            int32_t ebx_2 = 1
            
            do
                if ((ebx_2.b & *(edx + ecx) u>> 2 & 0xf) != 0)
                    int32_t edx_2 = (j + (edx << 2)) << 2
                    int32_t var_14_1 = edx_2
                    int32_t esi_1 = *(esi + (edx_2 << 2))
                    
                    if (esi_1 s>= 0)
                        *(ecx_1 + (esi_1 << 2)) = (*(ecx_1 + (esi_1 << 2)) & 0xfffff9ff) | 0x101
                        edx_2 = var_14_1
                        *(eax + (result << 2)) = esi_1
                        result += 1
                    
                    int32_t ecx_18 = var_10
                    int32_t esi_2 = *(ecx_18 + (edx_2 << 2) + 4)
                    
                    if (esi_2 s>= 0)
                        *(ecx_1 + (esi_2 << 2)) = (*(ecx_1 + (esi_2 << 2)) & 0xfffff9ff) | 0x101
                        edx_2 = var_14_1
                        *(eax + (result << 2)) = esi_2
                        result += 1
                        ecx_18 = var_10
                    
                    int32_t esi_3 = *(ecx_18 + (edx_2 << 2) + 8)
                    
                    if (esi_3 s>= 0)
                        *(ecx_1 + (esi_3 << 2)) = (*(ecx_1 + (esi_3 << 2)) & 0xfffff9ff) | 0x101
                        edx_2 = var_14_1
                        *(eax + (result << 2)) = esi_3
                        result += 1
                    
                    esi = var_10
                    int32_t edx_6 = *(esi + (edx_2 << 2) + 0xc)
                    
                    if (edx_6 s>= 0)
                        *(ecx_1 + (edx_6 << 2)) = (*(ecx_1 + (edx_6 << 2)) & 0xfffff9ff) | 0x101
                        esi = var_10
                        *(eax + (result << 2)) = edx_6
                        result += 1
                    
                    edx = var_18
                
                j += 1
                ebx_2 = rol.d(ebx_2, 1)
            while (j s< 4)
            
            edx += 1
            var_18 = edx
        while (edx u< ecx_3)
        
        ebx_1 = var_24
        edi = var_20
    
    ebx_1 += 0x20
    *edi = result - result_1
    edi += 4
    i = i_1
    i_1 -= 1
    ecx_2 = ecx_3
    result_1 = result
    var_20 = edi
    var_24 = ebx_1
while (i != 1)
*(arg1 + 0x110) = result
return result
