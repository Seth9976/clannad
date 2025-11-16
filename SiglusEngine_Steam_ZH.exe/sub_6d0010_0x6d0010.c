// 函数: sub_6d0010
// 地址: 0x6d0010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6cdc90(arg1)
int32_t eax = *(arg1 + 0x25c)

if (eax != 0)
    int32_t ecx = *(arg1 + 0x258)
    
    if (ecx == 0)
        _free(eax)
    else
        ecx(arg1, eax)

int32_t eax_1 = *(arg1 + 0x2a8)
*(arg1 + 0x25c) = 0

if (eax_1 != 0)
    int32_t ecx_1 = *(arg1 + 0x258)
    
    if (ecx_1 == 0)
        _free(eax_1)
    else
        ecx_1(arg1, eax_1)

int32_t eax_2 = *(arg1 + 0x298)
*(arg1 + 0x2a8) = 0

if (eax_2 != 0)
    int32_t ecx_2 = *(arg1 + 0x258)
    
    if (ecx_2 == 0)
        _free(eax_2)
    else
        ecx_2(arg1, eax_2)

int32_t eax_3 = *(arg1 + 0x200)
*(arg1 + 0x298) = 0

if (eax_3 != 0)
    int32_t ecx_3 = *(arg1 + 0x258)
    
    if (ecx_3 == 0)
        _free(eax_3)
    else
        ecx_3(arg1, eax_3)

int32_t eax_4 = *(arg1 + 0x204)
*(arg1 + 0x200) = 0

if (eax_4 != 0)
    int32_t ecx_4 = *(arg1 + 0x258)
    
    if (ecx_4 == 0)
        _free(eax_4)
    else
        ecx_4(arg1, eax_4)

bool cond:0 = (*(arg1 + 0x228) & 0x1000) == 0
*(arg1 + 0x204) = 0

if (not(cond:0))
    int32_t eax_5 = *(arg1 + 0x13c)
    
    if (eax_5 != 0)
        int32_t ecx_5 = *(arg1 + 0x258)
        
        if (ecx_5 == 0)
            _free(eax_5)
        else
            ecx_5(arg1, eax_5)
    
    *(arg1 + 0x13c) = 0

*(arg1 + 0x228) &= 0xffffefff

if ((*(arg1 + 0x228) & 0x2000) != 0)
    int32_t eax_6 = *(arg1 + 0x1ac)
    
    if (eax_6 != 0)
        int32_t ecx_6 = *(arg1 + 0x258)
        
        if (ecx_6 == 0)
            _free(eax_6)
        else
            ecx_6(arg1, eax_6)
    
    *(arg1 + 0x1ac) = 0

*(arg1 + 0x228) &= 0xffffdfff

if (arg1 != 0xffffff7c)
    void* eax_7 = *(arg1 + 0xa0)
    
    if (eax_7 != 0)
        int32_t ecx_7 = *(arg1 + 0xa8)
        
        if (ecx_7 != 0)
            int32_t eax_8 = *(eax_7 + 0x34)
            
            if (eax_8 != 0)
                ecx_7(*(arg1 + 0xac), eax_8)
            
            (*(arg1 + 0xa8))(*(arg1 + 0xac), *(arg1 + 0xa0))
            *(arg1 + 0xa0) = 0

int32_t eax_10 = *(arg1 + 0x1d4)

if (eax_10 != 0)
    int32_t ecx_8 = *(arg1 + 0x258)
    
    if (ecx_8 == 0)
        _free(eax_10)
    else
        ecx_8(arg1, eax_10)

int32_t eax_11 = *(arg1 + 0x288)
*(arg1 + 0x1d4) = 0

if (eax_11 != 0)
    int32_t ecx_9 = *(arg1 + 0x258)
    
    if (ecx_9 == 0)
        _free(eax_11)
    else
        ecx_9(arg1, eax_11)

int32_t eax_13 = *(arg1 + 0x23c)
*(arg1 + 0x288) = 0

if (eax_13 != 0)
    int32_t ecx_10 = *(arg1 + 0x258)
    
    if (ecx_10 != 0)
        int32_t eax_12 = ecx_10(arg1, eax_13)
        *(arg1 + 0x23c) = 0
        return eax_12
    
    eax_13 = _free(eax_13)

*(arg1 + 0x23c) = 0
return eax_13
