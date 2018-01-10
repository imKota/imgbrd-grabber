#include "image-loader.h"


ImageLoader::ImageLoader(QObject* parent)
	: QObject(parent)
{ }

void ImageLoader::load(const QByteArray &data)
{
	QPixmap img;
	if (img.loadFromData(data))
		emit finished(img, data.size());
	else
		emit failed();
}
