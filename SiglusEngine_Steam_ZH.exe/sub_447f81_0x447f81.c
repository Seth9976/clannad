// 函数: sub_447f81
// 地址: 0x447f81
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
int32_t edi
int32_t var_18 = edi
int16_t* edi_1 = arg3
uint32_t ebx_1 = zx.d(*edi_1) << 4
uint32_t eax_1 = zx.d(edi_1[1]) << 2
void* esi = arg1

if (ebx_1 u<= eax_1)
    ebx_1 = eax_1

uint32_t eax_3 = zx.d(edi_1[2]) << 4

if (ebx_1 u<= eax_3)
    ebx_1 = eax_3

if (*(esi + 0xc8) u< ebx_1)
    int32_t eax_4 = sub_745f3f(ebx_1)
    
    if (eax_4 == 0)
        return 0x8007000e
    
    __builtin_memset(__builtin_memset(eax_4, 0, ebx_1 u>> 2 << 2), 0, ebx_1 & 3)
    void* eax_5 = *(esi + 0xcc)
    
    if (eax_5 != 0)
        j__free(eax_5)
        *(esi + 0xcc) = 0
    
    *(esi + 0xcc) = eax_4
    edi_1 = arg3
    *(esi + 0xc8) = ebx_1

if (arg2 == 0)
label_448029:
    arg1.w = *edi_1
    
    if (arg1.w u<= 0)
    label_448050:
        arg1.w = edi_1[1]
        int32_t result_3
        
        if (arg1.w u> 0)
            int32_t* eax_9 = *(esi + 0xc)
            result_3 = (*(*eax_9 + 0x1c4))(eax_9, 0, *(esi + 0xcc), zx.d(arg1.w))
            result = result_3
        
        if (arg1.w u<= 0 || result_3 s>= 0)
            edi_1.w = edi_1[2]
            
            if (edi_1.w u> 0)
                int32_t* eax_10 = *(esi + 0xc)
                return (*(*eax_10 + 0x1bc))(eax_10, 0, *(esi + 0xcc), zx.d(edi_1.w))
    else
        int32_t* eax_8 = *(esi + 0xc)
        int32_t result_2
        result_2, arg1 = (*(*eax_8 + 0x1b4))(eax_8, 0, *(esi + 0xcc), zx.d(arg1.w))
        result = result_2
        
        if (result_2 s>= 0)
            goto label_448050
else
    int32_t* eax_7 = *(esi + 0xc)
    int32_t result_1
    result_1, arg1 = (*(*eax_7 + 0x1ac))(eax_7, 0)
    result = result_1
    
    if (result_1 s>= 0)
        goto label_448029

return result
