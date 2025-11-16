// 函数: sub_443eee
// 地址: 0x443eee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg3 + 4)
int32_t edi
int32_t var_70 = edi
void* ecx_2 = *(*(arg1 + 0x11c) + ((*(arg3 + 0x14) - *(arg1 + 0xac)) << 2)) + eax[2]
char* ebx = nullptr
int32_t var_8 = 0

if (*ecx_2 != 0)
    arg3 = ecx_2 + 4
else
    arg3 = nullptr

int32_t ecx_4 = *eax
int32_t eax_1 = eax[4]
int32_t var_14 = eax[1]
int32_t result

if (arg2 == 0 || arg3 == 0)
label_444191:
    result = 0x80004005
label_444198:
    
    if (var_8 != 0)
        j__free(var_8)
else
    char* eax_2 = arg2
    int32_t ecx_5
    
    do
        ecx_5.b = *eax_2
        eax_2 = &eax_2[1]
    while (ecx_5.b != 0)
    char* eax_4 = arg3
    void* edx_4
    
    do
        edx_4.b = *eax_4
        eax_4 = &eax_4[1]
    while (edx_4.b != 0)
    ebx = sub_745f3f(eax_4 - &eax_4[1] + eax_2 - &eax_2[1] + 2)
    
    if (ebx != 0)
        char* eax_8 = arg2
        *ebx = 0
        char* ecx_8 = eax_8
        char i
        
        do
            i = *eax_8
            eax_8 = &eax_8[1]
        while (i != 0)
        void* eax_9 = eax_8 - ecx_8
        void* edi_2 = ebx - 1
        char* esi_2 = ecx_8
        void* edx_5 = edi_2 + 1
        
        do
            ecx_8.b = *(edi_2 + 1)
            edi_2 += 1
        while (ecx_8.b != 0)
        
        int32_t esi_3
        int32_t edi_3
        edi_3, esi_3 = __builtin_memcpy(edi_2, esi_2, eax_9 u>> 2 << 2)
        void* edx_6 = edx_5 - 1
        __builtin_memcpy(edi_3, esi_3, eax_9 & 3)
        void* ecx_13 = edx_6 + 1
        
        do
            eax_9.b = *(edx_6 + 1)
            edx_6 += 1
        while (eax_9.b != 0)
        
        void* eax_10 = arg3
        *edx_6 = 0x40
        void* esi_5 = eax_10
        
        do
            edx_6.b = *eax_10
            eax_10 += 1
        while (edx_6.b != 0)
        
        void* eax_11 = eax_10 - esi_5
        void* ecx_14 = ecx_13 - 1
        
        do
            edx_6.b = *(ecx_14 + 1)
            ecx_14 += 1
        while (edx_6.b != 0)
        
        int32_t esi_6
        int32_t edi_7
        edi_7, esi_6 = __builtin_memcpy(ecx_14, esi_5, eax_11 u>> 2 << 2)
        __builtin_memcpy(edi_7, esi_6, eax_11 & 3)
        int32_t esi_8 = eax_1
        int32_t edx_7
        
        if (esi_8 u> 0)
            int32_t esi_7 = esi_8 << 6
            edx_7 = sub_745f3f(esi_7)
            var_8 = edx_7
            
            if (edx_7 != 0)
                esi_8 = eax_1
                __builtin_memset(__builtin_memset(edx_7, 0, esi_7 u>> 2 << 2), 0, esi_7 & 3)
                goto label_444037
            
            result = 0x8007000e
            goto label_444198
        
        edx_7 = var_8
    label_444037:
        int32_t result_1
        
        if (ecx_4 == 1)
            int32_t ecx_30 = *arg4
            
            if (esi_8 != 0)
                result_1 = (*(ecx_30 + 0x60))(arg4, ebx, edx_7, esi_8)
            else
                result_1 = (*(ecx_30 + 0x58))(arg4, ebx, esi_8)
        else if (ecx_4 == 2)
            int32_t ecx_29 = *arg4
            
            if (esi_8 != 0)
                result_1 = (*(ecx_29 + 0x70))(arg4, ebx, edx_7, esi_8)
            else
                result_1 = (*(ecx_29 + 0x68))(arg4, ebx, esi_8)
        else if (ecx_4 != 3)
            if (ecx_4 != 4 || esi_8 u> 0)
                goto label_444191
            
            result_1 = (*(*arg4 + 0xc8))(arg4, ebx, 0)
        else if (var_14 == 0)
            int32_t ecx_28 = *arg4
            
            if (esi_8 != 0)
                result_1 = (*(ecx_28 + 0x80))(arg4, ebx, edx_7, esi_8)
            else
                int32_t var_74_7 = ecx_28
                result_1 = (*(ecx_28 + 0x78))(arg4, ebx, fconvert.s(float.t(0)))
        else if (var_14 == 1)
            int32_t ecx_27 = *arg4
            
            if (esi_8 != 0)
                result_1 = (*(ecx_27 + 0x90))(arg4, ebx, edx_7, esi_8)
            else
                float var_24 = fconvert.s(float.t(0))
                float var_20_1 = fconvert.s(float.t(0))
                float var_1c_1 = fconvert.s(float.t(0))
                float var_18_1 = fconvert.s(float.t(0))
                result_1 = (*(ecx_27 + 0x88))(arg4, ebx, &var_24)
        else
            if (var_14 != 2)
                goto label_444191
            
            if (esi_8 != 0)
                result_1 = (*(*arg4 + 0xa0))(arg4, ebx, edx_7, esi_8)
            else
                float var_64 = fconvert.s(float.t(0))
                float var_60_1 = fconvert.s(float.t(0))
                float var_5c_1 = fconvert.s(float.t(0))
                float var_58_1 = fconvert.s(float.t(0))
                float var_54_1 = fconvert.s(float.t(0))
                float var_50_1 = fconvert.s(float.t(0))
                float var_4c_1 = fconvert.s(float.t(0))
                float var_48_1 = fconvert.s(float.t(0))
                float var_44_1 = fconvert.s(float.t(0))
                float var_40_1 = fconvert.s(float.t(0))
                float var_3c_1 = fconvert.s(float.t(0))
                float var_38_1 = fconvert.s(float.t(0))
                float var_34_1 = fconvert.s(float.t(0))
                float var_30_1 = fconvert.s(float.t(0))
                float var_2c_1 = fconvert.s(float.t(0))
                float var_28_1 = fconvert.s(float.t(0))
                result_1 = (*(*arg4 + 0x98))(arg4, ebx, &var_64)
        
        result = result_1
        goto label_444198
    
    result = 0x8007000e

if (ebx != 0)
    j__free(ebx)

return result
