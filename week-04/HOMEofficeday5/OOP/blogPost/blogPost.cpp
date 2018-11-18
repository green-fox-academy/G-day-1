#include "blogPost.h"

blogPost::blogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : _authorName(authorName), _title(title), _text(text),
                                                         _publicationDate(publicationDate) {}

const std::string &blogPost::getAuthorName() const {
    return _authorName;
}

const std::string &blogPost::getTitle() const {
    return _title;
}

const std::string &blogPost::getText() const {
    return _text;
}

const std::string &blogPost::getPublicationDate() const {
    return _publicationDate;
}
