// 函数: sub_64e5e0
// 地址: 0x64e5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = sub_5d2a40(arg3, arg2, arg4, arg5)
void* edx = data_bac510

if (*(edx + 0x10b9c) s> 0)
    void* ebx_1 = data_bac484
    int32_t eax_3 = *(ebx_1 + 0x124)
    
    if (eax_3 s>= 0 && *(ebx_1 + 0x118) s> eax_3)
        result.b = *(eax_3 * 0x2e60 + *(ebx_1 + 0x10c) + 0x2e5e)
    
    if (eax_3 s< 0 || *(ebx_1 + 0x118) s<= eax_3 || result.b == 0)
        void* edi_1 = data_bac458
        int32_t var_14
        void* ecx_1 = &var_14
        
        if (*(edx + 0x10ba0) s>= 1)
            ecx_1 = edx + 0x10ba0
        
        var_14 = 1
        int32_t ecx_2 = *(edi_1 + 0x36c)
        int32_t temp1_1 = mods.dp.d(sx.q(ecx_2), *ecx_1)
        *(edi_1 + 0x36c) = ecx_2 + 1
        
        if (temp1_1 == 0)
            void* ecx_3 = data_bac4d4
            
            if (*(ecx_3 + 0x88) != *(ecx_3 + 0x8c))
                int32_t* eax_9 = sub_745f3f(0xa8)
                int32_t* eax_10
                
                if (eax_9 == 0)
                    eax_10 = nullptr
                else
                    eax_10 = sub_633790(eax_9)
                
                int64_t* var_18
                sub_650400(&var_18, eax_10)
                int32_t var_8_1 = 0
                sub_64e7b0(var_18, data_bac4d4)
                void var_38
                int64_t* eax_11 = sub_5d4f60(&var_38, data_bac4d4, &var_18)
                var_8_1.b = 1
                int32_t* esi_2 = data_bac4a8
                int32_t* eax_12
                void* ecx_9
                eax_12, ecx_9 = sub_5d5070(eax_11)
                int32_t* var_50_5 = eax_12
                void* var_54_2 = &eax_12[4]
                void* var_20
                sub_5d50d0(esi_2, &var_20, ecx_9)
                var_8_1.b = 0
                sub_5ce820(&var_38)
                int64_t* ecx_12 = data_bac4d4
                void** var_5c_1
                var_5c_1.q = *ecx_12
                int32_t eax_14
                eax_14.w = *(ecx_12 + 0xc)
                var_50_5.w = eax_14.w
                sub_676200(var_5c_1, ecx_12[1].d, var_50_5)
                sub_5ce5a0()
                int32_t var_8_2 = 0xffffffff
                sub_54b010(&var_18)
                ebx_1 = data_bac484
        
        result = *(ebx_1 + 0x124)
        
        if (result s>= 0 && *(ebx_1 + 0x118) s> result)
            int32_t ecx_14 = result * 0x2e60
            result = *(ebx_1 + 0x10c)
            *(ecx_14 + result + 0x2e5e) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
