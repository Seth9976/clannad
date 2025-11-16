// 函数: sub_601c40
// 地址: 0x601c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t edi_1 = 0
    int32_t var_10_1 = 0
    int32_t edx_5
    int32_t i
    
    do
        int32_t* esi_2 = *(arg1 + 0xa8) + edi_1
        HANDLE edi_2 = *esi_2
        
        if (edi_2 != 0)
            WaitForSingleObject(edi_2, 0xffffffff)
        
        int32_t eax_3
        eax_3.b = esi_2[0xe].b
        
        if (edi_2 != 0)
            ReleaseSemaphore(edi_2, 1, nullptr)
            eax_3.b = eax_3.b
        
        if (eax_3.b != 0)
            HANDLE edi_3 = *esi_2
            
            if (edi_3 != 0)
                WaitForSingleObject(edi_3, 0xffffffff)
            
            eax_3.b = esi_2[0x13].b
            
            if (edi_3 != 0)
                ReleaseSemaphore(edi_3, 1, nullptr)
                eax_3.b = eax_3.b
            
            if (eax_3.b == 0)
                return 1
        
        i = i_3 + 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
        edi_1 = var_10_1 + 0x15c
        i_3 = i
        edx_5 = edx_4 s>> 6
        var_10_1 = edi_1
    while (i s< (edx_5 u>> 0x1f) + edx_5)

int32_t eax_7
int32_t edx_6
edx_6:eax_7 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
int32_t i_2 = 0
int32_t edx_7 = edx_6 s>> 6

if ((edx_7 u>> 0x1f) + edx_7 s> 0)
    int32_t edi_5 = 0
    int32_t var_c = 0
    int32_t edx_9
    int32_t i_1
    
    do
        int32_t* esi_5 = *(arg1 + 0xa8) + edi_5
        HANDLE edi_6 = *esi_5
        
        if (edi_6 != 0)
            WaitForSingleObject(edi_6, 0xffffffff)
        
        int32_t eax_10
        eax_10.b = esi_5[0xe].b
        
        if (edi_6 != 0)
            ReleaseSemaphore(edi_6, 1, nullptr)
            eax_10.b = eax_10.b
        
        if (eax_10.b != 0)
            HANDLE edi_7 = *esi_5
            
            if (edi_7 != 0)
                WaitForSingleObject(edi_7, 0xffffffff)
            
            eax_10.b = esi_5[0x13].b
            
            if (edi_7 != 0)
                ReleaseSemaphore(edi_7, 1, nullptr)
                eax_10.b = eax_10.b
            
            if (eax_10.b != 0)
                return 2
        
        i_1 = i_2 + 1
        int32_t eax_11
        int32_t edx_8
        edx_8:eax_11 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
        edi_5 = var_c + 0x15c
        i_2 = i_1
        edx_9 = edx_8 s>> 6
        var_c = edi_5
    while (i_1 s< (edx_9 u>> 0x1f) + edx_9)

return 0
