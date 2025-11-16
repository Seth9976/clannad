// 函数: sub_5dfd80
// 地址: 0x5dfd80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc6db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_408 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[4] != 0)
    uint32_t var_3d8_1 = *(arg1 + 0x34)
    uint32_t var_3e8_1 = *(arg1 + 0x48)
    int16_t* esi_1
    
    if (arg2[5] u< 8)
        esi_1 = arg2
    else
        esi_1 = *arg2
    
    int16_t* var_3e4
    int32_t i_1
    
    while (true)
        int32_t edx_1 = arg2[5]
        int32_t* eax_5
        
        if (edx_1 u< 8)
            eax_5 = arg2
        else
            eax_5 = *arg2
        
        int32_t ecx_1 = arg2[4] * 2
        
        if (esi_1 == eax_5 + ecx_1)
            break
        
        i_1 = 0
        int32_t* eax_7
        
        if (edx_1 u< 8)
            eax_7 = arg2
        else
            eax_7 = *arg2
        
        void* eax_8 = eax_7 + ecx_1
        void var_3f0
        int32_t var_3e0
        esi_1 = *sub_5dfba0(eax_8, &var_3e0, &var_3f0, esi_1, eax_8)
        int32_t eax_10 = var_3e0
        var_3e4 = esi_1
        uint32_t var_3dc
        
        if (eax_10 == 1)
            var_3d8_1 = var_3dc
        else if (eax_10 == 2)
            var_3d8_1 = *(arg1 + 0x34)
        else if (eax_10 == 3)
            var_3e8_1 = var_3dc
        else if (eax_10 == 4)
            var_3e8_1 = *(arg1 + 0x48)
        else if (eax_10 == 5)
            *(arg1 + 0x2c) = var_3dc
        else if (eax_10 == 6)
            *(arg1 + 0x30) = var_3dc
        else if (eax_10 == 7)
            *(arg1 + 0x2c) += var_3dc
        else if (eax_10 != 8)
            if (eax_10 == 0x63)
                var_3e0 = 0
                void var_3f4
                int32_t* eax_19 = sub_55d4d0(arg2, &var_3f4)
                sub_64f180(eax_19, &i_1, &var_3e4, *eax_19, &var_3dc)
                esi_1 = var_3e4
                eax_10 = var_3e0
            
            if (eax_10 == 0)
                void var_3d0
                sub_5db1c0(&var_3d0)
                int32_t var_8_1 = 0
                void* eax_21
                uint32_t edx_4
                
                if (var_3e8_1 == 0xffffffff)
                    eax_21 = data_bac4e4
                    
                    if (*(eax_21 + 0x16c) != 0)
                        edx_4 = *(arg1 + 0x54)
                    
                    if (*(eax_21 + 0x16c) == 0 || edx_4 == 0xffffffff)
                        edx_4 = *(arg1 + 0x20)
                else
                    edx_4 = var_3e8_1
                    eax_21 = data_bac4e4
                
                int32_t ecx_6 = *(arg1 + 0x4c)
                
                if (ecx_6 == 0xffffffff)
                    if (*(eax_21 + 0x16c) != 0)
                        ecx_6 = *(arg1 + 0x58)
                    
                    if (*(eax_21 + 0x16c) == 0 || ecx_6 == 0xffffffff)
                        ecx_6 = *(arg1 + 0x24)
                
                int32_t eax_22 = *(arg1 + 0x50)
                
                if (eax_22 == 0xffffffff)
                    if (*(data_bac4e4 + 0x16c) != 0)
                        eax_22 = *(arg1 + 0x5c)
                    
                    if (*(data_bac4e4 + 0x16c) == 0 || eax_22 == 0xffffffff)
                        eax_22 = *(arg1 + 0x28)
                
                sub_5dbca0(&var_3d0, i_1, var_3dc, var_3d8_1, edx_4, ecx_6, eax_22, *(arg1 + 0x2c), 
                    *(arg1 + 0x30))
                char var_3b0_1 = 1
                int32_t eax_29
                
                if (i_1 != 0)
                    eax_29 = *(arg1 + 0x38) + var_3d8_1
                else if (sub_55d4a0(var_3dc.w) == 0)
                    eax_29 = *(arg1 + 0x38) + var_3d8_1
                else
                    int32_t eax_27
                    int32_t edx_5
                    edx_5:eax_27 = sx.q(*(arg1 + 0x38) + var_3d8_1)
                    eax_29 = (eax_27 - edx_5) s>> 1
                
                *(arg1 + 0x2c) += eax_29
                sub_5b4a00(arg1 + 0x88, &var_3d0)
                int32_t var_8_2 = 0xffffffff
                sub_552000(&var_3d0)
        else
            *(arg1 + 0x30) += var_3dc
    
    int32_t i_2 = *(arg1 + 0x2c) - *(arg1 + 0x38)
    result = *(arg1 + 0x1c)
    i_1 = i_2
    
    if (result != 0)
        if (result == 1)
            if ((*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4 s> 0)
                int32_t ebx_1 = 0
                int32_t eax_36
                int32_t edx_9
                edx_9:eax_36 = sx.q(i_2)
                int32_t i = 0
                var_3e4 = (eax_36 - edx_9) s>> 1
                
                do
                    i += 1
                    void* edx_11 = *(arg1 + 0x88) + ebx_1
                    ebx_1 += 0x3b4
                    int32_t ecx_13 = *(edx_11 + 0x1c)
                    *(edx_11 + 0x18) -= var_3e4
                    *(edx_11 + 0x1c) = ecx_13
                while (i s< (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4)
                
                i_2 = i_1
            
            int32_t eax_46
            int32_t edx_15
            edx_15:eax_46 = sx.q(i_2)
            *(arg1 + 0x78) = neg.d((eax_46 - edx_15) s>> 1)
            int32_t eax_51
            int32_t edx_16
            edx_16:eax_51 = sx.q(i_2)
            *(arg1 + 0x80) = (eax_51 - edx_16) s>> 1
            goto label_5e0189
        
        if (result == 2)
            i_1 = 0
            
            if ((*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4 s> 0)
                int32_t ebx_2 = 0
                
                do
                    void* edx_21 = *(arg1 + 0x88) + ebx_2
                    i_1 += 1
                    ebx_2 += 0x3b4
                    int32_t ecx_18 = *(edx_21 + 0x1c)
                    *(edx_21 + 0x18) -= i_2
                    *(edx_21 + 0x1c) = ecx_18
                while (i_1 s< (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4)
            
            *(arg1 + 0x80) = 0
            *(arg1 + 0x78) = neg.d(i_2)
            goto label_5e0189
    else
        *(arg1 + 0x78) = result
        *(arg1 + 0x80) = i_2
    label_5e0189:
        result = *(arg1 + 0x34)
        *(arg1 + 0x7c) = 0
        *(arg1 + 0x84) = result
    
    if (arg1 + 0x60 != arg2)
        result = sub_52e3c0(arg1 + 0x60, arg2, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
