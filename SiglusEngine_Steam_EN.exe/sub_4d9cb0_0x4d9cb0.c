// 函数: sub_4d9cb0
// 地址: 0x4d9cb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* bstrString
int32_t* bstrString_4 = bstrString
void* var_1c

if ((*(*bstrString_4 + 0xc))(bstrString_4, &var_1c) s>= 0)
    void* ecx_1 = nullptr
    void* var_14_1 = nullptr
    uint32_t esi_1 = zx.d(*(var_1c + 0x2c))
    data_6400f8 = esi_1
    data_6400f4 = 0
    
    if (esi_1 != 0)
        int32_t var_34_1 = 0x640fa8
        ecx_1.b = mulu.dp.d(esi_1, 0xc) u>> 0x20 != 0
        int32_t ecx_3 = neg.d(ecx_1) | (esi_1 * 0xc)
        int32_t eax_8
        eax_8.b = ecx_3 u>= 0xfffffffc
        int32_t var_38_1 = neg.d(eax_8) | (ecx_3 + 4)
        uint32_t* bstrString_2 = sub_5f1a14()
        bstrString = bstrString_2
        int32_t var_8_1 = 0
        
        if (bstrString_2 == 0)
            ecx_1 = nullptr
            var_14_1 = nullptr
        else
            int32_t (__fastcall* var_34_2)(int32_t* arg1) = sub_4d94b0
            *bstrString_2 = esi_1
            var_14_1 = &bstrString_2[1]
            sub_5f1a5e(&bstrString_2[1], 0xc, esi_1, sub_4d9b40)
            ecx_1 = var_14_1
        
        int32_t var_8_2 = 0xffffffff
        
        if (ecx_1 == 0)
            (*(*bstrString_4 + 0x4c))(bstrString_4, var_1c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0x8007000e
        
        esi_1 = data_6400f8
    
    int32_t i = 0
    
    if (esi_1 s> 0)
        void* esi_2 = ecx_1
        
        do
            int32_t* var_18
            
            if ((*(*bstrString_4 + 0x14))(bstrString_4, i, &var_18) s>= 0)
                bstrString = nullptr
                int32_t var_8_3 = 1
                int32_t* ecx_8
                
                if ((*(*bstrString_4 + 0x30))(bstrString_4, *var_18, &bstrString, 0, 0, 0) s< 0)
                    ecx_8 = var_18
                else
                    uint32_t* bstrString_3 = bstrString
                    BSTR bstrString_1 = *esi_2
                    bstrString = nullptr
                    
                    if (bstrString_1 != bstrString_3)
                        SysFreeString(bstrString_1)
                        *esi_2 = bstrString_3
                    
                    uint32_t eax_19 = SysStringLen(*esi_2)
                    ecx_8 = var_18
                    *(esi_2 + 4) = eax_19
                    *(esi_2 + 8) = *ecx_8
                
                (*(*bstrString_4 + 0x50))(bstrString_4, ecx_8)
                int32_t var_8_4 = 0xffffffff
                SysFreeString(bstrString)
            
            i += 1
            esi_2 += 0xc
        while (i s< data_6400f8)
    
    void* var_34_9 = var_1c
    data_6400f4 = var_14_1
    (*(*bstrString_4 + 0x4c))(bstrString_4, var_34_9)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
