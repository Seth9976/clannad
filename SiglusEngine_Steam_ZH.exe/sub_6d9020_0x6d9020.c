// 函数: sub_6d9020
// 地址: 0x6d9020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)
char* edx_9

if ((eax_2.b & 1) == 0)
    edx_9 = "missing IHDR"
else
    if ((eax_2.b & 2) != 0)
        sub_6d47a0(arg3, "duplicate")
        noreturn
    
    if ((eax_2.b & 4) != 0)
        sub_6d8610(arg3, arg4)
        int32_t* eax_3 = sub_6d4840(arg3, "out of place")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    *(arg3 + 0x74) = eax_2 | 2
    int32_t eax_4
    eax_4.b = *(arg3 + 0x14f)
    
    if ((eax_4.b & 2) == 0)
        sub_6d8610(arg3, arg4)
        int32_t* eax_5 = sub_6d4840(arg3, "ignored in grayscale PNG")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_5
    
    uint32_t edx_3
    
    if (arg4 u<= 0x300)
        edx_3 = arg4 u/ 3
    
    if (arg4 u<= 0x300 && arg4 == edx_3 * 3)
        int32_t i_1 = arg4 s/ 3
        int32_t i_4
        
        if (eax_4.b != 3)
            i_4 = 0x100
        else
            i_4 = 1 << *(arg3 + 0x150)
        
        if (i_1 s> i_4)
            i_1 = i_4
        
        int32_t i_2 = i_1
        
        if (i_1 s> 0)
            void var_306
            void* edi_1 = &var_306
            int32_t i_3 = i_1
            int32_t i
            
            do
                sub_6d85d0(i_4, &i_3, arg3, 3)
                edi_1 += 3
                *(edi_1 - 5) = i_3.b
                *(edi_1 - 4) = i_3:1.b
                i_4 = zx.d(i_3:2.b)
                *(edi_1 - 3) = i_4.b
                i = i_1
                i_1 -= 1
            while (i != 1)
            i_1 = i_2
        
        sub_6d8610(arg3, arg4 - i_1 * 3)
        void var_308
        int32_t* eax_13 = sub_6ce580(&var_308, arg2, arg3, &var_308, i_1)
        
        if (*(arg3 + 0x148) u> 0)
        label_6d919b:
            *(arg3 + 0x148) = 0
            
            if (arg2 != 0)
                *(arg2 + 0x16) = 0
            
            eax_13 = sub_6d4840(arg3, "tRNS must be after")
        else
            if (arg2 == 0)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return eax_13
            
            if ((*(arg2 + 8) & 0x10) != 0)
                goto label_6d919b
        
        if (arg2 == 0)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_13
        
        char ebx_4 = (*(arg2 + 8)).b
        
        if ((ebx_4 & 0x40) != 0)
            eax_13 = sub_6d4840(arg3, "hIST must be after")
        
        if ((ebx_4 & 0x20) == 0)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_13
        
        edx_9 = "bKGD must be after"
    label_6d91da:
        eax_13 = sub_6d4840(arg3, edx_9)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_13
    
    sub_6d8610(arg3, arg4)
    edx_9 = "invalid"
    
    if (*(arg3 + 0x14f) != 3)
        goto label_6d91da

sub_6d47a0(arg3, edx_9)
noreturn
