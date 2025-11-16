// 函数: sub_493280
// 地址: 0x493280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = &data_1085afc
int32_t ebx = 0
void* result_1 = &data_1085afc

for (void* i = &data_924a74; i s< 0x925394; )
    if (ebx u<= 3)
        void* edi_1 = result - 0x88
        sub_490910(i - 0x48, edi_1)
        sub_490910(i, result_1 - 0x44)
        int32_t* result_2 = result_1
        sub_490910(i + 0x48, result_2)
        sub_490910(i + 0x90, &result_2[0x11])
        sub_4d1c30(0, i - 0x170, i - 0x4c, 0x124)
        result = result_1
        sub_4d1c30(result, result - 0x198, edi_1, 0x110)
    
    i += 0x248
    result += 0x220
    ebx += 1
    result_1 = result

return result
