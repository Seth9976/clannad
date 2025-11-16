// 函数: sub_4a2190
// 地址: 0x4a2190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 4
int32_t var_10 = arg2
int32_t esi = arg1
int32_t i_2 = 0x10
void* result = &data_208d3a4
int32_t var_14 = esi
void* result_1 = &data_208d3a4
int32_t i_1 = 0x10
void* edi = &data_20b0828
int32_t i

do
    if (esi s< 0)
        esi = 0
    else if (var_14 s> 0xff)
        esi = 0xff
    
    HANDLE hSemaphore
    
    if (arg2 != 0)
        sub_4c3500(WaitForSingleObject(data_1bfffc4, 0xffffffff), 3, ebx, 0xffffffff, esi, var_10)
        ReleaseSemaphore(data_1bfffc4, 1, nullptr)
        WaitForSingleObject(data_1bfffc4, 0xffffffff)
        
        if (ebx u<= 0x3f)
            int32_t edx
            
            if (esi s>= 0)
                edx = esi
                
                if (esi s> 0xff)
                    edx = 0xff
            else
                edx = 0
            
            int32_t ecx_3 = *(edi - 0x94)
            *(edi + 0xc) = data_1392ccc
            int32_t eax_4 = var_10
            *edi = ecx_3
            *(edi - 0xc) = edx
            *(edi - 8) = ecx_3
            *(edi + 0x18) = 2
            
            if (eax_4 s< 0)
                eax_4 = neg.d(eax_4)
            
            *(edi + 0x14) = eax_4
            *(edi + 0x10) = 0
            *(edi + 4) = edx
            *(edi + 8) = 0
            *(edi - 4) = 0
            *(edi - 0xb0) = 1
        
        int32_t var_2c_3 = 0
        int32_t var_30_7 = 1
        hSemaphore = data_1bfffc4
    label_4a234f:
        ReleaseSemaphore(hSemaphore, 1, nullptr)
        result = result_1
        i_1 = i_2
    else if (data_641b5c == arg2)
    label_4a224c:
        
        if (ebx u<= 0x3f)
            WaitForSingleObject(data_702788, 0xffffffff)
            
            if (esi s>= 0)
                int32_t eax_1 = esi
                
                if (esi s> 0xff)
                    eax_1 = 0xff
                
                *(edi - 0x94) = eax_1
            else
                *(edi - 0x94) = 0
            
            sub_4cbc80(ebx)
            int32_t var_2c_1 = 0
            int32_t var_30_3 = 1
            hSemaphore = data_702788
            goto label_4a234f
        
        i_1 = i_2
    else if (ebx s>= 0)
        if (ebx s< 0x40)
            WaitForSingleObject(data_641b54, 0xffffffff)
            void* result_2
            
            if (esi s>= 0)
                int32_t eax = esi
                
                if (esi s> 0xff)
                    eax = 0xff
                
                result_2 = result_1
                *result_2 = eax
            else
                result_2 = result_1
                *result_2 = 0
            
            if (*(result_2 - 0x4c) != 0 && *(result_2 - 0x50) != 0)
                sub_4c33a0(ebx)
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
            result = result_1
        
        goto label_4a224c
    arg2 = var_10
    result += 0x180
    ebx += 1
    data_976378 = esi
    esi = var_14
    edi += 0x3c0
    i = i_1
    i_1 -= 1
    result_1 = result
    i_2 = i_1
while (i != 1)
return result
