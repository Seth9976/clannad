// 函数: sub_447dd2
// 地址: 0x447dd2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
uint32_t result = 0
int32_t edi
int32_t var_18 = edi
int16_t* edi_1 = arg3
uint32_t result_3 = zx.d(*edi_1) << 4
uint32_t result_4 = zx.d(edi_1[1]) << 2
void* esi = arg1

if (result_3 u<= result_4)
    result_3 = result_4

uint32_t result_1 = zx.d(edi_1[2]) << 4

if (result_3 u<= result_1)
    result_3 = result_1

if (*(esi + 0xc8) u< result_3)
    uint32_t eax_2 = sub_745f3f(result_3)
    
    if (eax_2 == 0)
        return 0x8007000e
    
    __builtin_memset(__builtin_memset(eax_2, 0, result_3 u>> 2 << 2), 0, result_3 & 3)
    void* eax_3 = *(esi + 0xcc)
    
    if (eax_3 != 0)
        j__free(eax_3)
        *(esi + 0xcc) = 0
    
    *(esi + 0xcc) = eax_2
    edi_1 = arg3
    *(esi + 0xc8) = result_3

if (arg2 == 0)
label_447e7a:
    arg1.w = *edi_1
    
    if (arg1.w u> 0)
        int32_t* eax_5 = *(esi + 0xc)
        result_1 = (*(*eax_5 + 0x178))(eax_5, 0, *(esi + 0xcc), zx.d(arg1.w))
        result = result_1
    
    if (arg1.w u<= 0 || result_1 s>= 0)
        result_1.w = edi_1[1]
        uint32_t result_2
        
        if (result_1.w u> 0)
            result_2 = sub_442639(*(esi + 0xc), 0, *(esi + 0xcc), zx.d(result_1.w))
            result = result_2
        
        if (result_1.w u<= 0 || result_2 s>= 0)
            edi_1.w = edi_1[2]
            
            if (edi_1.w u> 0)
                int32_t* eax_7 = *(esi + 0xc)
                return (*(*eax_7 + 0x180))(eax_7, 0, *(esi + 0xcc), zx.d(edi_1.w))
else
    int32_t* eax_4 = *(esi + 0xc)
    result_1, arg1 = (*(*eax_4 + 0x170))(eax_4, 0)
    result = result_1
    
    if (result_1 s>= 0)
        goto label_447e7a

return result
