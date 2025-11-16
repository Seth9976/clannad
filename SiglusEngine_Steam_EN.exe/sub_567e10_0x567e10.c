// 函数: sub_567e10
// 地址: 0x567e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af0a48 == 0)
    return 

for (WPARAM wParam = 0; wParam s< 0x80; wParam += 1)
    for (int32_t j = 1; j s< 8; j += 1)
        HWND hWnd = GetDlgItem(data_1af0a48, 0x4f32)
        int32_t lParam = 5
        WPARAM wParam_1 = wParam
        int32_t j_1 = j
        void* const var_2c_1 = &data_6138e3
        WPARAM wParam_2 = wParam
        SendMessageA(hWnd, 0x102e, wParam, &lParam)

int32_t* ecx_1 = data_91e8fc

if (ecx_1 s<= 0)
    return 

HWND edx_1 = data_1af0a48
LRESULT eax = ecx_1 - 1
WPARAM esi_1 = 0

if (eax s> 0)
    void* edi_1 = &data_907efc
    
    do
        if (edx_1 != 0 && esi_1 u<= 0x7f)
            void* var_50_2 = edi_1
            sub_5655f0(eax, edx_1, esi_1, ecx_1)
            edx_1 = data_1af0a48
            ecx_1 = data_91e8fc
        
        esi_1 += 1
        eax = ecx_1 - 1
        edi_1 += 0x2d4
    while (esi_1 s< eax)

if (edx_1 != 0 && esi_1 u<= 0x7f)
    void* var_50_3 = esi_1 * 0x2d4 + &data_907efc
    sub_4c1300(sub_5655f0(esi_1 * 0x2d4 + &data_907efc, edx_1, esi_1, ecx_1), data_1af0a48, esi_1, 
        0x4f32, 0xffffffff)
