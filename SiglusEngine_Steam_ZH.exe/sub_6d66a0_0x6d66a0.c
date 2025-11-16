// 函数: sub_6d66a0
// 地址: 0x6d66a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_5c[0x54]
int32_t eax_5 = sub_6cf060(&var_5c, arg4, arg3, &var_5c)

if (eax_5 == 0)
    sub_6d42e0(arg3, "iTXt: invalid keyword")
    noreturn

if (arg2 + 1 u> 3)
    sub_6d42e0(arg3, "iTXt: invalid compression")
    noreturn

int32_t var_474_1
int32_t esi_1

switch (arg2)
    case 0, 2
        esi_1 = eax_5 + 1
        var_474_1 = 1
        var_5c[esi_1] = 1
    label_6d672f:
        
        if (esi_1 + 1 u< 0x52)
            var_5c[esi_1 + 1] = 0
            void* const edx_1 = &data_b0018c
            void* const eax_8 = &data_b0018c
            
            if (arg5 != 0)
                eax_8 = arg5
            
            char* ecx = eax_8
            void* const var_47c = eax_8
            void* ebx_1 = &ecx[1]
            
            do
                eax_8.b = *ecx
                ecx = &ecx[1]
            while (eax_8.b != 0)
            
            void* const ecx_2 = &data_b0018c
            
            if (arg6 != 0)
                ecx_2 = arg6
            
            void* const ecx_3 = ecx_2
            void* eax_10
            
            do
                eax_10.b = *ecx_3
                ecx_3 += 1
            while (eax_10.b != 0)
            
            if (arg7 != 0)
                edx_1 = arg7
            
            char* var_46c_1 = edx_1
            void* ebx_4
            
            if (ecx - ebx_1 + 1 u<= 0x7fffffff - (esi_1 + 2))
                ebx_4 = ecx - ebx_1 + 1 + esi_1 + 2
            else
                ebx_4 = 0x7fffffff
            
            void* ebx_5
            
            if (ecx_3 - (ecx_2 + 1) + 1 u<= 0x7fffffff - ebx_4)
                ebx_5 = ebx_4 + ecx_3 - (ecx_2 + 1) + 1
            else
                ebx_5 = 0x7fffffff
            
            char* ecx_6 = var_46c_1
            void* eax_14
            
            do
                eax_14.b = *ecx_6
                ecx_6 = &ecx_6[1]
            while (eax_14.b != 0)
            void* ecx_7 = ecx_6 - &ecx_6[1]
            char* var_468 = var_46c_1
            void* var_464 = ecx_7
            void* var_460 = nullptr
            
            if (var_474_1 == 0)
                if (ecx_7 u> 0x7fffffff - ebx_5)
                    sub_6d42e0(arg3, "iTXt: uncompressed text too long")
                    noreturn
                
                var_460 = ecx_7
            else
                if (sub_6d50f0(&var_468, 0x69545874, arg3, &var_468, ebx_5) != 0)
                    sub_6d42e0(arg3, *(arg3 + 0x9c))
                    noreturn
                
                ecx_7 = var_460
            
            void* eax_18 = ecx_7 + ebx_5
            int32_t eax_22 = sub_6d4b60(
                sub_6d4b60(
                    sub_6d4b60(sub_6d4aa0(eax_18, 0x69545874, arg3, eax_18), &var_5c, arg3, 
                        esi_1 + 2), 
                    var_47c, arg3, ecx - ebx_1 + 1), 
                ecx_2, arg3, ecx_3 - (ecx_2 + 1) + 1)
            
            if (var_474_1 == 0)
                sub_6d4b60(eax_22, var_46c_1, arg3, var_460)
            else
                sub_6d5280(arg3, &var_468)
            
            int32_t result = sub_6d4bb0(arg3)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return result
    case 1, 0xffffffff
        esi_1 = eax_5 + 1
        
        if (esi_1 u< 0x52)
            var_5c[esi_1] = 0
            var_474_1 = 0
            goto label_6d672f

___report_rangecheckfailure()
noreturn
