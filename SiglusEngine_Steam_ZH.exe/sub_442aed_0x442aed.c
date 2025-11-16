// 函数: sub_442aed
// 地址: 0x442aed
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg2 != 0
int32_t edi
int32_t var_424 = edi
int32_t* var_8 = nullptr
int32_t result
int32_t* eax_8

if (cond:0)
    char var_418[0x208]
    result = sub_46ae74(arg2, &var_418, &arg2)
    
    if (result s>= 0)
        if (arg2 u< 0x41)
            int32_t ecx_1 = 0
            
            if (arg2 u> 0)
                bool cond:1_1
                
                do
                    int32_t eax_5 = ecx_1 << 3
                    int32_t __saved_ebp
                    (&__saved_ebp)[ecx_1 * 2 - 0x83].w = 0
                    *(&(&__saved_ebp)[ecx_1 * 2] - 0x20a) = (ecx_1 * 0xc).w
                    (&__saved_ebp)[ecx_1 * 2 - 0x82].b = 2
                    *(&(&__saved_ebp)[ecx_1 * 2] - 0x207) = 0
                    void* edx_1
                    edx_1.b = var_418[eax_5]
                    void var_20a
                    *(&var_20a + eax_5) = edx_1.b
                    var_414
                    edx_1.b = *(&var_414 + eax_5)
                    ecx_1 += 1
                    cond:1_1 = ecx_1 u< arg2
                    void var_209
                    *(&var_209 + eax_5) = edx_1.b
                while (cond:1_1)
            
            void var_210
            __builtin_memcpy(&var_210 + (ecx_1 << 3), "\xff\x00\x00\x00\x11\x00\x00\x00", 8)
            int32_t* eax_6 = *(arg1 + 0xc)
            result = (*(*eax_6 + 0x158))(eax_6, &var_210, &var_8)
            
            if (result s>= 0)
                eax_8 = *(arg1 + 0xc)
                result = (*(*eax_8 + 0x15c))(eax_8, var_8)
        else
            result = 0x80004005
else
    if (*(arg1 + 0x100) != 0)
        int32_t* eax_1 = *(arg1 + 0x100)
        (*(*eax_1 + 4))(eax_1)
    
    var_8 = *(arg1 + 0x100)
    eax_8 = *(arg1 + 0xc)
    result = (*(*eax_8 + 0x15c))(eax_8, var_8)
int32_t* eax_10 = var_8

if (eax_10 != 0)
    (*(*eax_10 + 8))(eax_10)

return result
