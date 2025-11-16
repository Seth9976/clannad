// 函数: sub_42a760
// 地址: 0x42a760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
int32_t i_1 = arg1
data_13926ac = 0
data_13926a8 = 0xffffffff

if (i_1 s<= 0)
    return 

int32_t esi_1 = data_91e8fc
int32_t i

do
    if (esi_1 s< 0x80)
        *(esi_1 * 0x2d4 + &data_907efc) = 0
        int32_t eax
        int32_t* ecx_2
        eax, ecx_2 = sub_4d1ba0(sub_4d1ba0(eax, 0x24, esi_1 * 0x2d4 + 0x907f00, 0), 0x24, 
            esi_1 * 0x2d4 + 0x907f26, 0)
        HWND edx_1 = data_1af0a48
        WPARAM esi_4 = data_91e8fc
        
        if (edx_1 != 0 && esi_4 u<= 0x7f)
            void* var_10_1 = esi_4 * 0x2d4 + &data_907efc
            eax = sub_4c1300(sub_5655f0(esi_4 * 0x2d4 + &data_907efc, edx_1, esi_4, ecx_2), 
                data_1af0a48, esi_4, 0x4f32, 0xffffffff)
            esi_4 = data_91e8fc
        
        esi_1 = esi_4 + 1
        data_91e8fc = esi_1
    
    i = i_1
    i_1 -= 1
while (i != 1)
