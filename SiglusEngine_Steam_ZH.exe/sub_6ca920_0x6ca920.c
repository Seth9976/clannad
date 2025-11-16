// 函数: sub_6ca920
// 地址: 0x6ca920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_10 = 0x474e5089
void* ecx = arg4
int32_t var_c = 0xa1a0a0d

if (ecx u> 8)
    ecx = 8
label_6ca94e:
    
    if (arg2 u<= 7)
        if (arg2 + ecx u> 8)
            ecx = 8 - arg2
        
        void* esi = &var_10 + arg2
        int32_t* edx = arg2 + arg3
        void* i_1 = ecx - 4
        
        if (ecx u>= 4)
            void* i
            
            do
                if (*edx != *esi)
                    goto label_6ca986
                
                edx = &edx[1]
                esi += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 != 0xfffffffc)
        label_6ca986:
            int32_t eax_2
            eax_2.b = *edx
            char temp1_1 = *esi
            
            if (eax_2.b != temp1_1)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return sbb.d(eax_2, eax_2, eax_2.b u< temp1_1) | 1
            
            if (i_1 != 0xfffffffd)
                eax_2.b = *(edx + 1)
                char temp3_1 = *(esi + 1)
                
                if (eax_2.b != temp3_1)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return sbb.d(eax_2, eax_2, eax_2.b u< temp3_1) | 1
                
                if (i_1 != 0xfffffffe)
                    eax_2.b = *(edx + 2)
                    char temp4_1 = *(esi + 2)
                    
                    if (eax_2.b != temp4_1)
                        sub_745f2b(eax_1 ^ &__saved_ebp)
                        return sbb.d(eax_2, eax_2, eax_2.b u< temp4_1) | 1
                    
                    if (i_1 != 0xffffffff)
                        eax_2.b = *(edx + 3)
                        char temp5_1 = *(esi + 3)
                        
                        if (eax_2.b != temp5_1)
                            sub_745f2b(eax_1 ^ &__saved_ebp)
                            return sbb.d(eax_2, eax_2, eax_2.b u< temp5_1) | 1
        
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 0
else if (ecx u>= 1)
    goto label_6ca94e

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0xffffffff
