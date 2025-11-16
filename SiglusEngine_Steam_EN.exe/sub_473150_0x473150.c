// 函数: sub_473150
// 地址: 0x473150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi = arg2
int32_t var_30 = edi
sub_4d1ba0(eax_1, 0x94, edi, 0)
int32_t i_1 = 8
int32_t* esi_1 = arg1 + 0xc
int32_t var_18
void* result = 4 - &var_18
void* result_2 = result
int32_t i

do
    int32_t ecx_1 = esi_1[-2]
    
    if (ecx_1 != 0)
        if (esi_1[-3].b != 0)
            esi_1[-3].b = 0
        else
            *esi_1 += zx.d(esi_1[1].b) * data_1b14a28
        
        result = *esi_1
        void* ebx_1 = nullptr
        int32_t edx = esi_1[-1]
        void* var_24_1 = nullptr
        
        if (result u> edx)
            ebx_1 = result - edx
            var_24_1 = ebx_1
        
        if (ecx_1 u> ebx_1)
            int32_t eax_5 = zx.d(*(esi_1 + 6)) - 0x64
            int32_t var_c_1 = 0
            int32_t var_10_1 = 0
            int32_t var_14_1 = 0
            var_18 = 0
            int32_t var_14_6
            
            switch (eax_5)
                case 0, 1
                    var_18 = edi
                    var_14_6 = edi + 4
                case 2
                    var_18 = edi + 8
                case 3
                    var_18 = edi + 0xc
                    var_14_6 = edi + 0x10
                case 4
                    var_18 = edi + 0x14
                case 5
                    var_18 = edi + 0x18
                    int32_t var_14_2 = edi + 0x1c
                    int32_t var_10_2 = edi + 0x20
                case 6
                    var_18 = edi + 0x24
                    int32_t var_14_3 = edi + 0x28
                    int32_t var_10_3 = edi + 0x2c
                    int32_t var_c_2 = edi + 0x30
                case 7
                    var_18 = edi + 0x34
                case 8
                    var_18 = edi + 0x38
                case 9
                    var_18 = edi + 0x3c
                case 0xa
                    var_18 = edi + 0x40
                case 0xb
                    eax_5.b = *(esi_1 + 7)
                    
                    if (eax_5.b u< 8)
                        var_18 = edi + ((zx.d(eax_5.b) + 0x11) << 2)
                case 0xc
                    var_18 = edi + 0x64
                    int32_t var_14_4 = edi + 0x68
                    int32_t var_10_4 = edi + 0x6c
                    int32_t var_c_3 = edi + 0x70
                case 0xd
                    var_18 = edi + 0x74
                    int32_t var_14_5 = edi + 0x78
                    int32_t var_10_5 = edi + 0x7c
                    int32_t var_c_4 = edi + 0x80
                case 0xe
                    var_18 = edi + 0x84
                    var_14_6 = edi + 0x88
                case 0xf
                    var_18 = edi + 0x8c
                    var_14_6 = edi + 0x90
            
            int32_t* edi_1 = &var_18
            int32_t j_1 = 4
            result = result_2 + 4 + esi_1
            int32_t j_2 = 4
            void* result_1 = result
            int32_t j
            
            do
                int32_t eax_36 = *(result + edi_1)
                
                if (eax_36 != 0 && *edi_1 != 0)
                    int32_t edx_1 = esi_1[-2]
                    j_1.b = *(esi_1 + 5)
                    int32_t var_40_1 = data_1392710
                    int32_t ebx_5 = *edi_1
                    int32_t var_4c_1 = eax_36
                    int32_t var_58 = 0
                    int32_t var_34_1 = 1
                    
                    if (edx_1 s< 0)
                        edx_1 = neg.d(edx_1)
                    
                    int32_t var_38_1 = edx_1
                    int32_t var_3c_1 = 0
                    int32_t var_48_1 = 0
                    int32_t var_44_1 = 0
                    
                    if (j_1.b != 0xff)
                        if (j_1.b != 1)
                            char var_50_2 = j_1.b
                        
                        if (j_1.b == 1 || j_1.b == 2)
                            char var_50_3 = 0
                    else
                        int32_t var_48_2 = eax_36
                        int32_t var_44_2 = eax_36
                        var_58 = eax_36
                        char var_50_1 = j_1.b
                    
                    sub_4d1fd0(&var_58, var_24_1)
                    *ebx_5 += eax_36
                    j_1 = j_2
                
                result = result_1
                edi_1 = &edi_1[1]
                j = j_1
                j_1 -= 1
                j_2 = j_1
            while (j != 1)
            edi = var_30
        else
            esi_1[-2] = 0
    
    esi_1 = &esi_1[9]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
