/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_IMX258_SET_A_H
#define FIMC_IS_CIS_IMX258_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-imx258.h"
/* IMX258ES1_SEC(0AQH5)_RegisterSetting_26Mhz_ver1.00-0.23_181213.xlsx */

const u32 sensor_imx258_setfile_A_initial[] = {
	// Init External Clock Setting
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_global[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x3051, 0x00, 0x1,
	0x6B11, 0xCF, 0x1,
	0x7FF0, 0x08, 0x1,
	0x7FF1, 0x0F, 0x1,
	0x7FF2, 0x08, 0x1,
	0x7FF3, 0x1B, 0x1,
	0x7FF4, 0x23, 0x1,
	0x7FF5, 0x60, 0x1,
	0x7FF6, 0x00, 0x1,
	0x7FF7, 0x01, 0x1,
	0x7FF8, 0x00, 0x1,
	0x7FF9, 0x78, 0x1,
	0x7FFA, 0x01, 0x1,
	0x7FFB, 0x00, 0x1,
	0x7FFC, 0x00, 0x1,
	0x7FFD, 0x00, 0x1,
	0x7FFE, 0x00, 0x1,
	0x7FFF, 0x03, 0x1,
	0x7F76, 0x03, 0x1,
	0x7F77, 0xFE, 0x1,
	0x7FA8, 0x03, 0x1,
	0x7FA9, 0xFE, 0x1,
	0x7B24, 0x81, 0x1,
	0x7B25, 0x01, 0x1,
	0x6564, 0x07, 0x1,
	0x6B0D, 0x41, 0x1,
	0x653D, 0x04, 0x1,
	0x6B05, 0x8C, 0x1,
	0x6B06, 0xF9, 0x1,
	0x6B08, 0x65, 0x1,
	0x6B09, 0xFC, 0x1,
	0x6B0A, 0xCF, 0x1,
	0x6B0B, 0xD2, 0x1,
	0x6700, 0x0E, 0x1,
	0x6707, 0x0E, 0x1,
	0x5F04, 0x00, 0x1,
	0x5F05, 0xED, 0x1,
};

const u32 sensor_imx258_setfile_A_Image[] = {
	0x94C7, 0xFF, 0x1,
	0x94C8, 0xFF, 0x1,
	0x94C9, 0xFF, 0x1,
	0x95C7, 0xFF, 0x1,
	0x95C8, 0xFF, 0x1,
	0x95C9, 0xFF, 0x1,
	0x94C4, 0x3F, 0x1,
	0x94C5, 0x3F, 0x1,
	0x94C6, 0x3F, 0x1,
	0x95C4, 0x3F, 0x1,
	0x95C5, 0x3F, 0x1,
	0x95C6, 0x3F, 0x1,
	0x94C1, 0x02, 0x1,
	0x94C2, 0x02, 0x1,
	0x94C3, 0x02, 0x1,
	0x95C1, 0x02, 0x1,
	0x95C2, 0x02, 0x1,
	0x95C3, 0x02, 0x1,
	0x94BE, 0x0C, 0x1,
	0x94BF, 0x0C, 0x1,
	0x94C0, 0x0C, 0x1,
	0x95BE, 0x0C, 0x1,
	0x95BF, 0x0C, 0x1,
	0x95C0, 0x0C, 0x1,
	0x94D0, 0x74, 0x1,
	0x94D1, 0x74, 0x1,
	0x94D2, 0x74, 0x1,
	0x95D0, 0x74, 0x1,
	0x95D1, 0x74, 0x1,
	0x95D2, 0x74, 0x1,
	0x94CD, 0x2E, 0x1,
	0x94CE, 0x2E, 0x1,
	0x94CF, 0x2E, 0x1,
	0x95CD, 0x2E, 0x1,
	0x95CE, 0x2E, 0x1,
	0x95CF, 0x2E, 0x1,
	0x94CA, 0x4C, 0x1,
	0x94CB, 0x4C, 0x1,
	0x94CC, 0x4C, 0x1,
	0x95CA, 0x4C, 0x1,
	0x95CB, 0x4C, 0x1,
	0x95CC, 0x4C, 0x1,
	0x900E, 0x32, 0x1,
	0x94E2, 0xFF, 0x1,
	0x94E3, 0xFF, 0x1,
	0x94E4, 0xFF, 0x1,
	0x95E2, 0xFF, 0x1,
	0x95E3, 0xFF, 0x1,
	0x95E4, 0xFF, 0x1,
	0x94DF, 0x6E, 0x1,
	0x94E0, 0x6E, 0x1,
	0x94E1, 0x6E, 0x1,
	0x95DF, 0x6E, 0x1,
	0x95E0, 0x6E, 0x1,
	0x95E1, 0x6E, 0x1,
	0x7FCC, 0x01, 0x1,
	0x7B78, 0x00, 0x1,
	0x9401, 0x35, 0x1,
	0x9403, 0x23, 0x1,
	0x9405, 0x23, 0x1,
	0x9406, 0x00, 0x1,
	0x9407, 0x31, 0x1,
	0x9408, 0x00, 0x1,
	0x9409, 0x1B, 0x1,
	0x940A, 0x00, 0x1,
	0x940B, 0x15, 0x1,
	0x940D, 0x3F, 0x1,
	0x940F, 0x3F, 0x1,
	0x9411, 0x3F, 0x1,
	0x9413, 0x64, 0x1,
	0x9415, 0x64, 0x1,
	0x9417, 0x64, 0x1,
	0x941D, 0x34, 0x1,
	0x941F, 0x01, 0x1,
	0x9421, 0x01, 0x1,
	0x9423, 0x01, 0x1,
	0x9425, 0x23, 0x1,
	0x9427, 0x23, 0x1,
	0x9429, 0x23, 0x1,
	0x942B, 0x2F, 0x1,
	0x942D, 0x1A, 0x1,
	0x942F, 0x14, 0x1,
	0x9431, 0x3F, 0x1,
	0x9433, 0x3F, 0x1,
	0x9435, 0x3F, 0x1,
	0x9437, 0x6B, 0x1,
	0x9439, 0x7C, 0x1,
	0x943B, 0x81, 0x1,
	0x9443, 0x0F, 0x1,
	0x9445, 0x0F, 0x1,
	0x9447, 0x0F, 0x1,
	0x9449, 0x0F, 0x1,
	0x944B, 0x0F, 0x1,
	0x944D, 0x0F, 0x1,
	0x944F, 0x1E, 0x1,
	0x9451, 0x0F, 0x1,
	0x9453, 0x0B, 0x1,
	0x9455, 0x28, 0x1,
	0x9457, 0x13, 0x1,
	0x9459, 0x0C, 0x1,
	0x945D, 0x00, 0x1,
	0x945E, 0x00, 0x1,
	0x945F, 0x00, 0x1,
	0x946D, 0x00, 0x1,
	0x946F, 0x10, 0x1,
	0x9471, 0x10, 0x1,
	0x9473, 0x40, 0x1,
	0x9475, 0x2E, 0x1,
	0x9477, 0x10, 0x1,
	0x9478, 0x0A, 0x1,
	0x947B, 0xE0, 0x1,
	0x947C, 0xE0, 0x1,
	0x947D, 0xE0, 0x1,
	0x947E, 0xE0, 0x1,
	0x947F, 0xE0, 0x1,
	0x9480, 0xE0, 0x1,
	0x9483, 0x14, 0x1,
	0x9485, 0x14, 0x1,
	0x9487, 0x14, 0x1,
	0x9501, 0x35, 0x1,
	0x9503, 0x14, 0x1,
	0x9505, 0x14, 0x1,
	0x9507, 0x31, 0x1,
	0x9509, 0x1B, 0x1,
	0x950B, 0x15, 0x1,
	0x950D, 0x1E, 0x1,
	0x950F, 0x1E, 0x1,
	0x9511, 0x1E, 0x1,
	0x9513, 0x64, 0x1,
	0x9515, 0x64, 0x1,
	0x9517, 0x64, 0x1,
	0x951D, 0x34, 0x1,
	0x951F, 0x01, 0x1,
	0x9521, 0x01, 0x1,
	0x9523, 0x01, 0x1,
	0x9525, 0x14, 0x1,
	0x9527, 0x14, 0x1,
	0x9529, 0x14, 0x1,
	0x952B, 0x2F, 0x1,
	0x952D, 0x1A, 0x1,
	0x952F, 0x14, 0x1,
	0x9531, 0x1E, 0x1,
	0x9533, 0x1E, 0x1,
	0x9535, 0x1E, 0x1,
	0x9537, 0x6B, 0x1,
	0x9539, 0x7C, 0x1,
	0x953B, 0x81, 0x1,
	0x9543, 0x0F, 0x1,
	0x9545, 0x0F, 0x1,
	0x9547, 0x0F, 0x1,
	0x9549, 0x0F, 0x1,
	0x954B, 0x0F, 0x1,
	0x954D, 0x0F, 0x1,
	0x954F, 0x15, 0x1,
	0x9551, 0x0B, 0x1,
	0x9553, 0x08, 0x1,
	0x9555, 0x1C, 0x1,
	0x9557, 0x0D, 0x1,
	0x9559, 0x08, 0x1,
	0x955D, 0x00, 0x1,
	0x955E, 0x00, 0x1,
	0x955F, 0x00, 0x1,
	0x956D, 0x00, 0x1,
	0x956F, 0x10, 0x1,
	0x9571, 0x10, 0x1,
	0x9573, 0x40, 0x1,
	0x9575, 0x2E, 0x1,
	0x9577, 0x10, 0x1,
	0x9578, 0x0A, 0x1,
	0x957B, 0xE0, 0x1,
	0x957C, 0xE0, 0x1,
	0x957D, 0xE0, 0x1,
	0x957E, 0xE0, 0x1,
	0x957F, 0xE0, 0x1,
	0x9580, 0xE0, 0x1,
	0x9583, 0x14, 0x1,
	0x9585, 0x14, 0x1,
	0x9587, 0x14, 0x1,
	0x7F78, 0x00, 0x1,
	0x7F89, 0x00, 0x1,
	0x7F93, 0x00, 0x1,
	0x924B, 0x1B, 0x1,
	0x924C, 0x0A, 0x1,
	0x9304, 0x04, 0x1,
	0x9315, 0x04, 0x1,
	0x9250, 0x50, 0x1,
	0x9251, 0x3C, 0x1,
	0x9252, 0x14, 0x1,
};

const u32 sensor_imx258_setfile_A_4128x3096_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xC3, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x13, 0x1,
	0x0821, 0xCE, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0C, 0x1,
	0x0341, 0xA4, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x0C, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x23, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x11, 0x1,
	0x0401, 0x00, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x10, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x28, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x20, 0x1,
	0x040E, 0x0C, 0x1,
	0x040F, 0x18, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x10, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x0C, 0x1,
	0x034F, 0x18, 0x1,
	0x0202, 0x0C, 0x1,
	0x0203, 0x9A, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x01, 0x1,
	0x3032, 0x01, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_4128x2324_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xA8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x02, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xD8, 0x1,
	0x0310, 0x00, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x1C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x00, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0A, 0x1,
	0x0341, 0xA0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x8E, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0A, 0x1,
	0x034B, 0xA1, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x11, 0x1,
	0x0401, 0x00, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x10, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x28, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x20, 0x1,
	0x040E, 0x09, 0x1,
	0x040F, 0x14, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x10, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x09, 0x1,
	0x034F, 0x14, 0x1,
	0x0202, 0x0A, 0x1,
	0x0203, 0x96, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x01, 0x1,
	0x3032, 0x01, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_4128x2008_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xA8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x02, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xD8, 0x1,
	0x0310, 0x00, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x1C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x00, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0A, 0x1,
	0x0341, 0xA0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x02, 0x1,
	0x0347, 0x2C, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0A, 0x1,
	0x034B, 0x03, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x11, 0x1,
	0x0401, 0x00, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x10, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x28, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x20, 0x1,
	0x040E, 0x07, 0x1,
	0x040F, 0xD8, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x10, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0xD8, 0x1,
	0x0202, 0x0A, 0x1,
	0x0203, 0x96, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x01, 0x1,
	0x3032, 0x01, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_4128x1908_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xA8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x02, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xD8, 0x1,
	0x0310, 0x00, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x1C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x00, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0A, 0x1,
	0x0341, 0xA0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x02, 0x1,
	0x0347, 0x5E, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x09, 0x1,
	0x034B, 0xD1, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x11, 0x1,
	0x0401, 0x00, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x10, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x28, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x20, 0x1,
	0x040E, 0x07, 0x1,
	0x040F, 0x74, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x10, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x74, 0x1,
	0x0202, 0x0A, 0x1,
	0x0203, 0x96, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x01, 0x1,
	0x3032, 0x01, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_3088x3088_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0C, 0x1,
	0x0341, 0xA4, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x10, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x1F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x11, 0x1,
	0x0401, 0x00, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x10, 0x1,
	0x0408, 0x02, 0x1,
	0x0409, 0x30, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x0C, 0x1,
	0x040D, 0x10, 0x1,
	0x040E, 0x0C, 0x1,
	0x040F, 0x10, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x0C, 0x1,
	0x034D, 0x10, 0x1,
	0x034E, 0x0C, 0x1,
	0x034F, 0x10, 0x1,
	0x0202, 0x0C, 0x1,
	0x0203, 0x9A, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x01, 0x1,
	0x3032, 0x01, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_1280x720_120fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x03, 0x1,
	0x0341, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0xE0, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0A, 0x1,
	0x034B, 0x4F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x03, 0x1,
	0x0387, 0x03, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x12, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x30, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0xB6, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x0F, 0x1,
	0x040D, 0x02, 0x1,
	0x040E, 0x02, 0x1,
	0x040F, 0xD0, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x01, 0x1,
	0x034C, 0x05, 0x1,
	0x034D, 0x00, 0x1,
	0x034E, 0x02, 0x1,
	0x034F, 0xD0, 0x1,
	0x0202, 0x03, 0x1,
	0x0203, 0x1E, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x01, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_1048x780_119fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x03, 0x1,
	0x0341, 0x2C, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x00, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x2F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x14, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x40, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x06, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x64, 0x1,
	0x040E, 0x03, 0x1,
	0x040F, 0x0C, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x04, 0x1,
	0x034D, 0x18, 0x1,
	0x034E, 0x03, 0x1,
	0x034F, 0x0C, 0x1,
	0x0202, 0x03, 0x1,
	0x0203, 0x22, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_1052x780_119fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x03, 0x1,
	0x0341, 0x2C, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x00, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x2F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x14, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x3E, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x40, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x0F, 0x1,
	0x040D, 0xF0, 0x1,
	0x040E, 0x03, 0x1,
	0x040F, 0x0C, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x04, 0x1,
	0x034D, 0x1C, 0x1,
	0x034E, 0x03, 0x1,
	0x034F, 0x0C, 0x1,
	0x0202, 0x03, 0x1,
	0x0203, 0x22, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_1040x780_119fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x03, 0x1,
	0x0341, 0x2C, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x00, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x2F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x14, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x40, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x16, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x44, 0x1,
	0x040E, 0x03, 0x1,
	0x040F, 0x0C, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x04, 0x1,
	0x034D, 0x10, 0x1,
	0x034E, 0x03, 0x1,
	0x034F, 0x0C, 0x1,
	0x0202, 0x03, 0x1,
	0x0203, 0x22, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x00, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_2064x1548_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0C, 0x1,
	0x0341, 0xA4, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x0C, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x23, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x12, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x20, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x26, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x22, 0x1,
	0x040E, 0x06, 0x1,
	0x040F, 0x0C, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x08, 0x1,
	0x034D, 0x10, 0x1,
	0x034E, 0x06, 0x1,
	0x034F, 0x0C, 0x1,
	0x0202, 0x0C, 0x1,
	0x0203, 0x9A, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x01, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_2064x1160_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0C, 0x1,
	0x0341, 0xA4, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x90, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0A, 0x1,
	0x034B, 0x9F, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x12, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x20, 0x1,
	0x0408, 0x00, 0x1,
	0x0409, 0x26, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x10, 0x1,
	0x040D, 0x22, 0x1,
	0x040E, 0x04, 0x1,
	0x040F, 0x88, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x08, 0x1,
	0x034D, 0x10, 0x1,
	0x034E, 0x04, 0x1,
	0x034F, 0x88, 0x1,
	0x0202, 0x0C, 0x1,
	0x0203, 0x9A, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x01, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const u32 sensor_imx258_setfile_A_1536x1536_30fps[] = {
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x03, 0x1,
	0x0301, 0x05, 0x1,
	0x0303, 0x02, 0x1,
	0x0305, 0x04, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xC8, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,
	0x030D, 0x04, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x0310, 0x01, 0x1,
	0x0820, 0x11, 0x1,
	0x0821, 0x10, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x4648, 0x7F, 0x1,
	0x7420, 0x00, 0x1,
	0x7421, 0x5C, 0x1,
	0x7422, 0x00, 0x1,
	0x7423, 0xD7, 0x1,
	0x9104, 0x04, 0x1,
	0x0342, 0x14, 0x1,
	0x0343, 0xE8, 0x1,
	0x0340, 0x0C, 0x1,
	0x0341, 0xA4, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x18, 0x1,
	0x0348, 0x10, 0x1,
	0x0349, 0x6F, 0x1,
	0x034A, 0x0C, 0x1,
	0x034B, 0x17, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x12, 0x1,
	0x0401, 0x01, 0x1,
	0x0404, 0x00, 0x1,
	0x0405, 0x20, 0x1,
	0x0408, 0x02, 0x1,
	0x0409, 0x36, 0x1,
	0x040A, 0x00, 0x1,
	0x040B, 0x00, 0x1,
	0x040C, 0x0C, 0x1,
	0x040D, 0x02, 0x1,
	0x040E, 0x06, 0x1,
	0x040F, 0x00, 0x1,
	0x3038, 0x00, 0x1,
	0x303A, 0x00, 0x1,
	0x303B, 0x10, 0x1,
	0x300D, 0x00, 0x1,
	0x034C, 0x06, 0x1,
	0x034D, 0x00, 0x1,
	0x034E, 0x06, 0x1,
	0x034F, 0x00, 0x1,
	0x0202, 0x0C, 0x1,
	0x0203, 0x9A, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x00, 0x1,
	0x020E, 0x01, 0x1,
	0x020F, 0x00, 0x1,
	0x0210, 0x01, 0x1,
	0x0211, 0x00, 0x1,
	0x0212, 0x01, 0x1,
	0x0213, 0x00, 0x1,
	0x0214, 0x01, 0x1,
	0x0215, 0x00, 0x1,
	0x7BCD, 0x01, 0x1,
	0x94DC, 0x20, 0x1,
	0x94DD, 0x20, 0x1,
	0x94DE, 0x20, 0x1,
	0x95DC, 0x20, 0x1,
	0x95DD, 0x20, 0x1,
	0x95DE, 0x20, 0x1,
	0x7FB0, 0x00, 0x1,
	0x9010, 0x3E, 0x1,
	0x9419, 0x50, 0x1,
	0x941B, 0x50, 0x1,
	0x9519, 0x50, 0x1,
	0x951B, 0x50, 0x1,
	0x3030, 0x00, 0x1,
	0x3032, 0x00, 0x1,
	0x0220, 0x00, 0x1,
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_4128x3096_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1267.5 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	3236,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_4128x2324_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	109200000 * 4,			/* pclk = VTPXCK*/
	2720,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_4128x2008_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	109200000 * 4,			/* pclk = VTPXCK*/
	2720,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_4128x1908_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	109200000 * 4,			/* pclk = VTPXCK*/
	2720,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_3088x3088_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	3236,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_1280x720_120fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	808,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_1048x780_119fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	812,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_1052x780_119fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	812,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_1040x780_119fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	812,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_2064x1548_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	3236,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_2064x1160_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	3236,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx258_pllinfo_A_1536x1536_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	1092 * 1000 * 1000,		/* mipi_datarate = OPSYCK */
	130000000 * 4,			/* pclk = VTPXCK*/
	3236,				/* frame_length_lines */
	5352,				/* line_length_pck */
};

static const u32 *sensor_imx258_setfiles_A[] = {
	sensor_imx258_setfile_A_4128x3096_30fps,
	sensor_imx258_setfile_A_4128x2324_30fps,
	sensor_imx258_setfile_A_4128x2008_30fps,
	sensor_imx258_setfile_A_4128x1908_30fps,
	sensor_imx258_setfile_A_3088x3088_30fps,
	sensor_imx258_setfile_A_2064x1548_30fps,
	sensor_imx258_setfile_A_2064x1160_30fps,
	sensor_imx258_setfile_A_1536x1536_30fps,
	sensor_imx258_setfile_A_1280x720_120fps,
	sensor_imx258_setfile_A_1052x780_119fps,
	sensor_imx258_setfile_A_1048x780_119fps,
	sensor_imx258_setfile_A_1040x780_119fps,
};

static const u32 sensor_imx258_setfile_A_sizes[] = {
	sizeof(sensor_imx258_setfile_A_4128x3096_30fps) / sizeof(sensor_imx258_setfile_A_4128x3096_30fps[0]),
	sizeof(sensor_imx258_setfile_A_4128x2324_30fps) / sizeof(sensor_imx258_setfile_A_4128x2324_30fps[0]),
	sizeof(sensor_imx258_setfile_A_4128x2008_30fps) / sizeof(sensor_imx258_setfile_A_4128x2008_30fps[0]),
	sizeof(sensor_imx258_setfile_A_4128x1908_30fps) / sizeof(sensor_imx258_setfile_A_4128x1908_30fps[0]),
	sizeof(sensor_imx258_setfile_A_3088x3088_30fps) / sizeof(sensor_imx258_setfile_A_3088x3088_30fps[0]),
	sizeof(sensor_imx258_setfile_A_2064x1548_30fps) / sizeof(sensor_imx258_setfile_A_2064x1548_30fps[0]),
	sizeof(sensor_imx258_setfile_A_2064x1160_30fps) / sizeof(sensor_imx258_setfile_A_2064x1160_30fps[0]),
	sizeof(sensor_imx258_setfile_A_1536x1536_30fps) / sizeof(sensor_imx258_setfile_A_1536x1536_30fps[0]),
	sizeof(sensor_imx258_setfile_A_1280x720_120fps) / sizeof(sensor_imx258_setfile_A_1280x720_120fps[0]),
	sizeof(sensor_imx258_setfile_A_1052x780_119fps) / sizeof(sensor_imx258_setfile_A_1052x780_119fps[0]),
	sizeof(sensor_imx258_setfile_A_1048x780_119fps) / sizeof(sensor_imx258_setfile_A_1048x780_119fps[0]),
	sizeof(sensor_imx258_setfile_A_1040x780_119fps) / sizeof(sensor_imx258_setfile_A_1040x780_119fps[0]),
};

static const u32 sensor_imx258_setfile_A_initial_size =
	sizeof(sensor_imx258_setfile_A_initial) / sizeof(sensor_imx258_setfile_A_initial[0]);
static const u32 sensor_imx258_setfile_A_global_size =
	sizeof(sensor_imx258_setfile_A_global) / sizeof(sensor_imx258_setfile_A_global[0]);
static const u32 sensor_imx258_setfile_A_Image_size =
	sizeof(sensor_imx258_setfile_A_Image) / sizeof(sensor_imx258_setfile_A_Image[0]);

static const struct sensor_pll_info_compact *sensor_imx258_pllinfos_A[] = {
	&sensor_imx258_pllinfo_A_4128x3096_30fps,
	&sensor_imx258_pllinfo_A_4128x2324_30fps,
	&sensor_imx258_pllinfo_A_4128x2008_30fps,
	&sensor_imx258_pllinfo_A_4128x1908_30fps,
	&sensor_imx258_pllinfo_A_3088x3088_30fps,
	&sensor_imx258_pllinfo_A_2064x1548_30fps,
	&sensor_imx258_pllinfo_A_2064x1160_30fps,
	&sensor_imx258_pllinfo_A_1536x1536_30fps,
	&sensor_imx258_pllinfo_A_1280x720_120fps,
	&sensor_imx258_pllinfo_A_1052x780_119fps,
	&sensor_imx258_pllinfo_A_1048x780_119fps,
	&sensor_imx258_pllinfo_A_1040x780_119fps,
};

#endif


