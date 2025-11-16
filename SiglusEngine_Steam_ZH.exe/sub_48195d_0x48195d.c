// 函数: sub_48195d
// 地址: 0x48195d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t var_24
__builtin_memcpy(&var_24, arg2, 0x20)
int16_t* arg_8
int16_t* edi_1 = arg_8
void* ecx = *arg1
void* var_1c = &edi_1[1]
void* var_40 = arg1[1]
var_24 = 0xa

if (sub_43be42(ecx, 1, &var_24, nullptr, nullptr, var_40, 2, &arg_8, nullptr) == 0)
    int32_t result
    int32_t* edx_2
    result, edx_2 = sub_48189a(*(arg_8 + 0x20), arg3, nullptr)
    
    if (result s< 0)
        return result
    
    if (*edi_1 == 0x5f62)
        void* eax_5
        
        if (*edx_2 == 1)
            eax_5 = *(arg_8 + 0x20)
        
        if (*edx_2 != 1 || *(eax_5 + 4) != 9 || *(eax_5 + 0x10) != 0 || *(eax_5 + 0x14) != 0)
            int16_t* var_34_1 = edi_1
            sub_42aba3(*(*arg1 + 4) + 0x18, arg2, 0xb54, 
                "boolean constant register '%s' must be defined as a variable of type bool only")
            return 0x80004005
    else if (*edi_1 == 0x5f69)
        void* eax_7
        
        if (*edx_2 == 1)
            eax_7 = *(arg_8 + 0x20)
        
        if (*edx_2 != 1 || *(eax_7 + 4) != 9 || *(eax_7 + 0x10) != 1 || *(eax_7 + 0x14) != 4
                || *(eax_7 + 0x1c) u< 3)
            int16_t* var_34_2 = edi_1
            sub_42aba3(*(*arg1 + 4) + 0x18, arg2, 0xb55, 
                "integer constant register '%s' must be defined as a variable of type int3 or int4 only")
            return 0x80004005
else
    *arg3 = 0

return 0
