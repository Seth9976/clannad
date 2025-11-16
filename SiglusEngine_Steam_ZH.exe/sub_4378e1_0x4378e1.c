// 函数: sub_4378e1
// 地址: 0x4378e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_11c = edi
void* edi_1 = arg4
void var_108
void* var_10c = &var_108

if (edi_1 != 0)
    int32_t eax_1 = *(edi_1 + 4)
    char var_9_2
    
    if (eax_1 == 1)
        char const* const esi_1 = "const "
        
        if (sub_437693(arg1, edi_1) == 0)
            esi_1 = &data_b0018c
        
        int32_t var_120_8 = sub_4377a1(arg1, edi_1)
        char const* const var_124_4 = esi_1
        sub_74aa1b(&var_108, 0xff, "%sstruct{%u}")
        var_9_2 = 0
    else if (eax_1 == 8)
        void* eax_7 = edi_1
        
        if (*(edi_1 + 4) == 8)
            do
                eax_7 = *(eax_7 + 0x10)
            while (*(eax_7 + 4) == 8)
        
        void* eax_8
        eax_8, arg1 = sub_4378e1(&var_108, 0xff, eax_7)
        void* ebx_1 = eax_8
        
        while (*(edi_1 + 4) == 8)
            int32_t var_120_5 = *(edi_1 + 0x14)
            int32_t __saved_ebp
            sub_74aa1b(&__saved_ebp + ebx_1 - 0x104, 0xff - ebx_1, "[%u]")
            void* eax_10 = &__saved_ebp + ebx_1 - 0x104
            char var_9_1 = 0
            arg1 = eax_10 + 1
            char i
            
            do
                i = *eax_10
                eax_10 += 1
            while (i != 0)
            edi_1 = *(edi_1 + 0x10)
            ebx_1 += eax_10 - arg1
    else if (eax_1 == 9)
        char const* const edx_1 = "const "
        
        if ((*(edi_1 + 0x21) & 2) == 0)
            edx_1 = &data_b0018c
        
        int32_t eax_5 = *(edi_1 + 0x14)
        char const* const eax_6
        
        if (eax_5 u> 0x1d)
            eax_6 = "unknown"
        else
            switch (eax_5)
                case 0
                    eax_6 = "bool"
                case 1, 2, 3, 4, 5, 6, 7, 8
                    eax_6 = &data_b08bbc
                case 9, 0xb
                    eax_6 = "float"
                case 0xa
                    eax_6 = "half"
                case 0xc
                    eax_6 = "double"
                case 0xd
                    eax_6 = "NULL"
                case 0xe
                    eax_6 = "string"
                case 0xf
                    eax_6 = "texture"
                case 0x10
                    eax_6 = "texture1D"
                case 0x11
                    eax_6 = "texture2D"
                case 0x12
                    eax_6 = "texture3D"
                case 0x13
                    eax_6 = "textureCUBE"
                case 0x14
                    eax_6 = "sampler"
                case 0x15
                    eax_6 = "sampler1D"
                case 0x16
                    eax_6 = "sampler2D"
                case 0x17
                    eax_6 = "sampler3D"
                case 0x18
                    eax_6 = "samplerCUBE"
                case 0x19
                    eax_6 = "pixelshader"
                case 0x1a
                    eax_6 = "vertexshader"
                case 0x1b
                    eax_6 = "pixelfragment"
                case 0x1c
                    eax_6 = "vertexfragment"
                case 0x1d
                    eax_6 = "stateblock"
        
        int32_t ecx = *(edi_1 + 0x10)
        
        if (ecx == 1)
            int32_t var_120_3 = *(edi_1 + 0x1c)
            char const* const var_124_3 = eax_6
            char const* const var_128_3 = edx_1
            sub_74aa1b(&var_108, 0xff, "%s%s%u")
            var_9_2 = 0
        else if (ecx == 2)
            int32_t var_120_2 = *(edi_1 + 0x1c)
            int32_t var_124_2 = *(edi_1 + 0x18)
            char const* const var_128_2 = eax_6
            char const* const var_12c_1 = edx_1
            sub_74aa1b(&var_108, 0xff, "%s%s%ux%u")
            var_9_2 = 0
        else
            char const* const var_120_1 = eax_6
            char const* const var_124_1 = edx_1
            sub_74aa1b(&var_108, 0xff, "%s%s")
            var_9_2 = 0
    else
        var_10c = "unknown"
else
    var_10c = "void"

void* eax_14 = var_10c
void* edx_2 = eax_14 + 1

do
    arg1.b = *eax_14
    eax_14 += 1
while (arg1.b != 0)

void* result = eax_14 - edx_2

if (result u> arg3)
    result = arg3

int32_t esi_3
int32_t edi_3
edi_3, esi_3 = __builtin_memcpy(arg2, var_10c, result u>> 2 << 2)
__builtin_memcpy(edi_3, esi_3, result & 3)
*(arg2 + result) = 0
sub_745f2b(__security_cookie_1)
return result
