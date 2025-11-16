// 函数: sub_5c5730
// 地址: 0x5c5730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb5ea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* bstrString
int32_t* bstrString_4 = bstrString
void* var_1c

if ((*(*bstrString_4 + 0xc))(bstrString_4, &var_1c) s>= 0)
    void* ecx = nullptr
    void* var_14_1 = nullptr
    uint32_t eax_6 = zx.d(*(var_1c + 0x2c))
    *(arg1 + 0x18) = eax_6
    *(arg1 + 0x14) = 0
    
    if (eax_6 != 0)
        int32_t var_38_1 = 0xb94bc4
        ecx.b = mulu.dp.d(eax_6, 0xc) u>> 0x20 != 0
        int32_t ecx_2 = neg.d(ecx) | (eax_6 * 0xc)
        int32_t eax_8
        eax_8.b = ecx_2 u>= 0xfffffffc
        int32_t var_3c_1 = neg.d(eax_8) | (ecx_2 + 4)
        uint32_t* bstrString_2 = sub_746f19()
        bstrString = bstrString_2
        int32_t var_8_1 = 0
        
        if (bstrString_2 == 0)
            ecx = nullptr
            var_14_1 = nullptr
        else
            int32_t (__fastcall* var_38_2)(int32_t* arg1) = sub_5c4b30
            *bstrString_2 = eax_6
            var_14_1 = &bstrString_2[1]
            sub_74675f(&bstrString_2[1], 0xc, eax_6, sub_5c55f0)
            ecx = var_14_1
        
        int32_t var_8_2 = 0xffffffff
        
        if (ecx == 0)
            (*(*bstrString_4 + 0x4c))(bstrString_4, var_1c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0x8007000e
    
    int32_t i = 0
    
    if (*(arg1 + 0x18) s> 0)
        void* esi_1 = ecx
        
        do
            int32_t* var_18
            
            if ((*(*bstrString_4 + 0x14))(bstrString_4, i, &var_18) s>= 0)
                bstrString = nullptr
                int32_t var_8_3 = 1
                int32_t* ecx_7
                
                if ((*(*bstrString_4 + 0x30))(bstrString_4, *var_18, &bstrString, 0, 0, 0) s< 0)
                    ecx_7 = var_18
                else
                    uint32_t* bstrString_3 = bstrString
                    BSTR bstrString_1 = *esi_1
                    bstrString = nullptr
                    
                    if (bstrString_1 != bstrString_3)
                        SysFreeString(bstrString_1)
                        *esi_1 = bstrString_3
                    
                    uint32_t eax_19 = SysStringLen(*esi_1)
                    ecx_7 = var_18
                    *(esi_1 + 4) = eax_19
                    *(esi_1 + 8) = *ecx_7
                
                (*(*bstrString_4 + 0x50))(bstrString_4, ecx_7)
                int32_t var_8_4 = 0xffffffff
                SysFreeString(bstrString)
            
            i += 1
            esi_1 += 0xc
        while (i s< *(arg1 + 0x18))
    
    void* var_38_9 = var_1c
    *(arg1 + 0x14) = var_14_1
    (*(*bstrString_4 + 0x4c))(bstrString_4, var_38_9)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
