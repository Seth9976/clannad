// 函数: sub_6a4d10
// 地址: 0x6a4d10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca160
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 s>= 0)
    eax_3 = data_bac510
    
    if (eax_3[0x42e4] + eax_3[0x42e3] + eax_3[0x42e2] s> arg2)
        int32_t eax_4
        int32_t* ecx
        eax_4, ecx = sub_745f3f(0x122c)
        int32_t var_18 = eax_4
        int32_t* var_14 = nullptr
        int32_t var_8_1 = 0
        int32_t* var_30 = &var_14
        sub_6a5810(eax_4, eax_4, ecx)
        int32_t var_8_2 = 1
        int32_t eax_6 = arg2 * 0xc
        sub_54d190(*arg1 + eax_6, &var_18)
        int32_t var_8_3 = 0xffffffff
        int32_t* ebx = var_14
        
        if (ebx != 0)
            bool cond:0_1 = ebx[1] != 1
            ebx[1]
            ebx[1] -= 1
            
            if (not(cond:0_1))
                (*(*ebx + 4))(eax_2)
                bool cond:1_1 = ebx[2] != 1
                ebx[2]
                ebx[2] -= 1
                
                if (not(cond:1_1))
                    (*(*ebx + 8))()
        
        sub_748840(*(eax_6 + *arg1), arg3, 0x122c, eax_2)
        void* ebx_1 = data_bac510
        
        if (arg2 s>= 0 && arg2 s< *(ebx_1 + 0x10b88))
            int32_t ecx_8 = arg1[3]
            
            if (ecx_8 != 0xffffffff && ecx_8 != arg2)
                int32_t* eax_13 = *arg1
                
                if (sub_650590(eax_13[ecx_8 * 3], eax_13[arg2 * 3]).b != 0)
                    arg1[3] = arg2
        
        int32_t ecx_11 = *(ebx_1 + 0x10b88)
        
        if (ecx_11 s<= arg2 && arg2 s< *(ebx_1 + 0x10b8c) + ecx_11)
            int32_t ebx_2 = arg1[4]
            int32_t esi_1 = arg2 - ecx_11
            
            if (ebx_2 != 0xffffffff && ebx_2 != esi_1)
                int32_t edx_6 = *arg1
                
                if (sub_650590(*(edx_6 + (ebx_2 + ecx_11) * 0xc), *(edx_6 + (ecx_11 + esi_1) * 0xc))
                        .b != 0)
                    arg1[4] = esi_1
        
        int32_t* eax_12
        eax_12.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
