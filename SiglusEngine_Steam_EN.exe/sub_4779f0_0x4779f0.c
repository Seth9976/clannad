// 函数: sub_4779f0
// 地址: 0x4779f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx = arg6[2]

if (ebx == 0)
    return 

arg1 = arg4[2]

if (arg1 == 0 || arg7 s< 0 || arg7 s>= *arg6 || arg5 s< 0 || arg5 s>= *arg4)
    return 

void* esi_2 = arg7 * 0x7d8
int32_t eax = *(esi_2 + ebx + 0x190)
void* esi_3 = esi_2 + ebx
void* ebx_2 = arg5 * 0x7d8 + arg1

if (eax u> 9)
    sub_477010(esi_3 + 0x194, arg2, arg3, arg5, *(esi_3 + 0x18c), esi_3 + 0x194, *(esi_3 + 0x200), 
        esi_3 + 0x1b8, esi_3 + 0x1dc)
else
    uint32_t eax_1 = zx.d(lookup_table_477b9c[eax])
    
    switch (eax_1)
        case 0
            sub_476c40(eax_1, arg2, arg3, arg5, 0)
        case 1, 4
            sub_477010(esi_3 + 0x194, arg2, arg3, arg5, *(esi_3 + 0x18c), esi_3 + 0x194, 
                *(esi_3 + 0x200), esi_3 + 0x1b8, esi_3 + 0x1dc)
        case 2
            sub_477440(eax_1, arg2, arg3, arg5, *(esi_3 + 0x18c))
        case 3
            sub_477370(eax_1, arg2, arg3, arg5, *(esi_3 + 0x18c), *(esi_3 + 0x204))

int32_t eax_5 = *(esi_3 + 0x7d4)
*(ebx_2 + 0x7d4) = eax_5
sub_4d1c30(eax_5, esi_3 + 0x208, ebx_2 + 0x208, 0xc8)
sub_4d1c30(eax_5, esi_3 + 0x2d0, ebx_2 + 0x2d0, 0xfc)
sub_4d1c30(eax_5, esi_3 + 0x3cc, ebx_2 + 0x3cc, 0x78)
sub_4d1c30(eax_5, esi_3 + 0x444, ebx_2 + 0x444, 0x378)
sub_4d1c30(eax_5, esi_3 + 0x7bc, ebx_2 + 0x7bc, 0x18)
sub_4d6c40(ebx_2 + 0x18, ebx_2 + 0x1c)
arg1 = *(esi_3 + 0x1c)

if (arg1 != 0)
    sub_4cfe90(arg1, ebx_2 + 0x1c, ebx_2 + 0x18, arg1, "objmoji07")
