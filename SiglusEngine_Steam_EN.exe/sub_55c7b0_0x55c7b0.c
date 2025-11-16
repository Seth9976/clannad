// 函数: sub_55c7b0
// 地址: 0x55c7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT result
int32_t* ecx_1

for (WPARAM wParam = 0; wParam s< 0x40; wParam += 1)
    for (int32_t j = 1; j s< 0x3e; j += 1)
        HWND hWnd = GetDlgItem(data_1af0a4c, 0x4f32)
        int32_t lParam = 5
        WPARAM wParam_1 = wParam
        int32_t j_1 = j
        void* const var_30_1 = &data_6138e3
        WPARAM wParam_2 = wParam
        result, ecx_1 = SendMessageA(hWnd, 0x102e, wParam, &lParam)

WPARAM edi_1 = data_719ba4
WPARAM esi

if (edi_1 s> 0)
    esi = 0

HWND edx

if (edi_1 s<= 0 || edi_1 s<= 0)
    edx = data_1af0a4c
else
    edx = data_1af0a4c
    result = 0x719ba8
    LRESULT result_1 = 0x719ba8
    
    do
        if (edx != 0 && esi u<= 0x3f)
            int32_t var_50_2 = 0
            ecx_1 = sub_55bf30(result, edx, esi, ecx_1, result)
            edx = data_1af0a4c
            edi_1 = data_719ba4
            result = result_1
        
        esi += 1
        result += 0x4ec
        result_1 = result
    while (esi s< edi_1)

if (edi_1 s>= 0x40 || edx == 0 || edi_1 u> 0x3f)
    return result

int32_t var_50_3 = 1
return sub_4c1300(
    sub_55bf30(edi_1 * 0x4ec + 0x719ba8, edx, edi_1, ecx_1, edi_1 * 0x4ec + 0x719ba8), 
    data_1af0a4c, edi_1, 0x4f32, 0xffffffff)
